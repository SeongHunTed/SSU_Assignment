#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// #define DEBUG
#define MAX_SIZE 100
#define INF 987654321
typedef struct nodetype
{
    int parent;
    int depth;
} nodetype;

typedef struct edgetype
{
    int weight;
    int i, j;
} edgetype;

const int N = 10; // Vertext count
// const int W[MAX_SIZE][MAX_SIZE] = {
//     {0, 1, 3, INF, INF},
//     {1, 0, 3, 6, INF},
//     {3, 3, 0, 4, 2},
//     {INF, 6, 4, 0, 5},
//     {INF, INF, 2, 5, 0}};   // Edge
// const int W[MAX_SIZE][MAX_SIZE] = {
//     {0, 1, 3, INF, INF},
//     {1, 0, 7, 3, INF},
//     {3, 7, 0, 2, 4},
//     {INF, 3, 2, 0, 5},
//     {INF, INF, 4, 5, 0}};   // Edge
const int W[MAX_SIZE][MAX_SIZE] = {
    {0, 32, INF, 17, INF, INF, INF, INF, INF, INF},
    {32, 0, INF, INF, 45, INF, INF, INF, INF, INF},
    {INF, INF, 0, 18, INF, INF, 5, INF, INF, INF},
    {17, INF, 18, 0, 10, INF, INF, 3, INF, INF},
    {INF, 45, INF, 10, 0, 28, INF, INF, 25, INF},
    {INF, INF, INF, INF, 28, 0, INF, INF, INF, 6},
    {INF, INF, 5, INF, INF, INF, 0, 59, INF, INF},
    {INF, INF, INF, 3, INF, INF, 59, 0, 4, INF},
    {INF, INF, INF, INF, 25, INF, INF, 4, 0, 12},
    {INF, INF, INF, INF, INF, 6, INF, INF, 12, 0}}; // Edge
edgetype E[MAX_SIZE] = {0};                         // Edge set
int m = 0;                                          // Edge count
nodetype U[MAX_SIZE];

void kruskal(void);
void makeset(int i);
int find(int i);
void merge(int p, int q);
bool equal(int p, int q);
void initial(int n);

int main(void)
{
    int i, j;

    kruskal();

    // Print minnimum spanning tree
    printf("\n====MST edges list====\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            if (i == j)
                continue;
            else if (i == U[j].parent)
                printf("(v%d, v%d)\n", i + 1, j + 1);

    return 0;
}

void kruskal(void)
{
    int i, j, p, q;

    // Export edge set E from W
    for (i = 0; i < N; i++)
        for (j = i + 1; j < N; j++)
            if (W[i][j] != INF && W[i][j] != 0)
            {
                E[m].i = i;
                E[m].j = j;
                E[m].weight = W[i][j];
                m++;
            }

    // Sort the m edges in E by weight in nondecreasing order
    for (i = m - 1; i >= 0; i--)
        for (j = i - 1; j >= 0; j--)
            if (E[i].weight < E[j].weight)
            {
                edgetype temp = E[i];
                E[i] = E[j];
                E[j] = temp;
            }

#ifdef DEBUG
    // Print sorted edges
    printf("====Edges sorted list====\n");
    for (i = 0; i < m; i++)
        printf("(v%d, v%d) %d\n", E[i].i + 1, E[i].j + 1, E[i].weight);
#endif
    initial(N);

    for (i = 0; i < m; i++)
    {
        p = find(E[i].i);
        q = find(E[i].j);
        if (!equal(p, q))
            merge(E[i].i, E[i].j);
#ifdef DEBUG
        printf("====U array====\n");
        for (j = 0; j < N; j++)
            printf("U[%d] %d\n", j + 1, U[j].parent + 1);
#endif
    }
}

void makeset(int i)
{
    U[i].parent = i;
    U[i].depth = 0;
}

int find(int i)
{
    int j;

    j = i;
    while (U[j].parent != j)
        j = U[j].parent;

    return j;
}

void merge(int p, int q)
{
    if (U[p].depth == U[q].depth)
    {
        U[p].depth++;
        U[q].parent = p;
    }
    // 깊이가 작은 트리를 자식 마디로 만든다
    else if (U[p].depth < U[q].depth)
        U[p].parent = q;
    else
        U[q].parent = p;
}

bool equal(int p, int q)
{
    return p == q ? true : false;
}

void initial(int n)
{
    int i;

    for (i = 0; i < n; i++)
        makeset(i);
    
}