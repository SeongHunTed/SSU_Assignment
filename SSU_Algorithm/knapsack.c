#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Macro
#define DEBUG

// Structure type
typedef struct node
{
    int level;
    int profit;
    int weight;
    int bound;
    void *next;
} node;

// Global variable
// Case 1
#define N 4                               // Item count
const int W = 16;                         // Maximum available weight
const int p[N + 1] = {0, 40, 30, 50, 10}; // item.Profit
const int w[N + 1] = {0, 2, 5, 10, 5};    // item.Weight

// Case 2
// #define N = 5;   // Item count
// const int W = 9; // Maximum available weight
// const int P[N + 1] = {0, 20, 30, 35, 12, 3};   // item.Profit
// const int W[N + 1] = {0, 2, 5, 7, 3, 1};       // item.Weight

int numbest = 0;               // Number of best items
int maxprofit = 0;             // Maximum profit value
bool bestset[N + 1] = {false}; // Best set of items in the knapsack

// Function prototype
void knapsack(int i, int profit, int weight, bool include[N + 1]);
bool promising(int i, int profit, int weight);

// Function implementation
int main(void)
{
    int i;
    bool include[N + 1] = {false};

    knapsack(0, 0, 0, include);

    printf("\tBest set: ");
    for (i = 1; i <= N; i++)
    {
        if (bestset[i] == true)
        {
            printf("\ti%d(%d, %d)", i, p[i], w[i]);
        }
    }

    return 0;
}

void knapsack(int i, int profit, int weight, bool include[N + 1])
{
    if (weight <= W && profit > maxprofit)
    {
        maxprofit = profit;
        numbest = i;
        memcpy(bestset, include, (N + 1) * sizeof(bool));
#ifdef DEBUG
        printf("\tSelect Item: ");
        for (int i = 1; i <= N; i++)
        {
            if (bestset[i] == true)
            {
                printf("\ti%d(%d, %d)", i, p[i], w[i]);
            }
        }
        printf("\n\tprofit: %d\n\n", profit);
#endif
    }

    if (promising(i, profit, weight))
    {
        // w[i + 1] 포함
        include[i + 1] = true;
        knapsack(i + 1, profit + p[i + 1], weight + w[i + 1], include);

        // w[i + 1] 비포함
        include[i + 1] = false;
        knapsack(i + 1, profit, weight, include);
    }
}

bool promising(int i, int profit, int weight)
{
    int totweight;
    float bound;

    // Check if the knapsack is full
    if (weight >= W)
    {
        return false;
    }

    bound = profit;
    totweight = weight;

    // 가능한 한 많은 아이템을 취한다.
    while (i <= N && totweight + w[i] <= W)
    {
        totweight = totweight + w[i];
        bound = bound + p[i];
        i++;
    }

    // 교재에서 사용된 k == i
    if (i <= N)
    {
        bound = bound + (W - totweight) * p[i] / w[i];
    }

    return bound > maxprofit;
}