#include <iostream>
#include <string>
using namespace std;

typedef struct node
{
    int level;
    int progit;
    int weight;
    int bound;
    void *next;
} node;

// // case1
// #define N 4
// const int W = 16; // maximum weight
// const int p[N+1] = {0,40,30,50,10}; // profit
// const int w[N+1] = {0,2,5,10,5}; // weight

// Case 2
#define N 5
const int W = 9; // Maximum weight
const int p[N+1] = {0, 20, 30, 35, 12, 3}; // Profit
const int w[N+1] = {0, 2, 5, 7, 3, 1}; // Weight

int numbest = 0;
int maxprofit = 0;
bool bestset[N+1] = {false};

void knapsack(int i, int profit, int weight, bool include[N+1]);
bool promising(int i, int profit, int weight);

int main(void)
{
    int i;
    bool include[N+1] = {false};

    knapsack(0,0,0,include);

    cout << "Best set : ";
    for(i = 0; i<=N; i++)
    {
        if(bestset[i] == true)
        {
            cout << "i" << i << "(" << p[i] << ", " << w[i] << ") ";
        }
    }

    return 0;
}

void knapsack(int i, int profit, int weight, bool include[N+1])
{
    if(weight <= W && profit > maxprofit)
    {
        maxprofit = profit;
        numbest = i;
        memcpy(bestset, include, (N+1)*sizeof(bool));
    }

    if(promising(i, profit, weight))
    {
        include[i+1] = true;
        knapsack(i+1, profit + p[i+1], weight + w[i+1], include);

        include[i+1] = false;
        knapsack(i+1, profit, weight, include);
    }
}

bool promising(int i, int profit, int weight)
{
    int total;
    float bound;

    if(weight >= W)
    {
        return false;
    }

    bound = profit;
    total = weight;

    while(i <= N && total + w[i] <= W)
    {
        total += w[i];
        bound += p[i];
        i++;
    }

    if(i <= N)
    {
        bound = bound + (W-total) * p[i] / w[i];
    }

    return bound > maxprofit;
}