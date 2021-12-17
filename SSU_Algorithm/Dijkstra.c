// Header
#include <stdio.h>
#include <stdbool.h>

// Macro
#define DEBUG
#define MAX_SIZE 100
#define INF 987654321

// Structure type
typedef struct edgetype
{
    int weight;
    int i, j;
} edgetype;

// Global variable
const int N = 5; // Vertext count
// const int W[MAX_SIZE][MAX_SIZE] = {
//     {INF, 7, 4, 6, 1},
//     {INF, INF, INF, INF, INF},
//     {INF, 2, INF, 5, INF},
//     {INF, 3, INF, INF, INF},
//     {INF, INF, INF, 1, INF}}; // Edge
const int W[MAX_SIZE][MAX_SIZE] = {
    {INF, 4, 2, INF, INF},
    {INF, INF, 3, 2, 3},
    {INF, 1, INF, 4, 5},
    {INF, INF, INF, INF, INF},
    {INF, INF, INF, 1, INF}}; // Edge
edgetype F[MAX_SIZE];
int m = 0;

// Function prototype
void dijkstra(void);

// Function implementation
int main(void)
{
    dijkstra();
    return 0;
}

void dijkstra(void)
{
    int _, i;
    int touch[N];  // Y에 속한 정점들만 중간에 거치도록 하여 v1에서 vi로 가는 현재 최단 경로 상의 마지막 이음선을 <v, vi>라고 할 때, Y에 속한 마디 v의 인덱스
    int length[N]; // Y에 속한 마디들만 중간에 거치도록 하여 v1에서 vi로 가는 현재 최단 경로의 길이
    int min, vnear;

    for (i = 1; i < N; i++)
    {
        // 각 정점에 대해서 v1에서 출발하는 현재 최단경로의 마지막 마디를 v1로 초기화
        touch[i] = 0;
        // 그 경로의 길이는 v1에서의 이음선 상의 가중치로 초기화
        length[i] = W[0][i];
    }

    for (_ = 0; _ < N - 1; _++)
    {
        min = INF;
        // 최단 경로를 가지는지 각 정점을 점검
        for (i = 1; i < N; i++)
        {
            if (0 <= length[i] && length[i] < min)
            {
                min = length[i];
                vnear = i;
            }
        }

        for (i = 1; i < N; i++)
        {
            // 기존 경로보다 거쳐서 가는 경로가 더 빠른 경우
            if (length[vnear] + W[vnear][i] < length[i])
            {
                // Y에 속하지 않는 각 정점에 대해서 최단 경로를 변경
                length[i] = length[vnear] + W[vnear][i];
                touch[i] = vnear;
            }
        }

        // vnear가 인덱스인 정점을 Y에 추가
        F[m].i = touch[vnear];
        F[m].j = vnear;
        F[m++].weight = length[vnear];
        length[vnear] = -1;
    }
    // Print shortest path edge
    printf("Shortest path\n");
    for( i = 0; i < m; i++)
    {
        printf("(v%d, v%d) %d\n", F[i].i + 1, F[i].j + 1, F[i].weight);
    }
}