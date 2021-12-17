#include <iostream>
using namespace std;
#define SIZE 5
#define INF 9999

typedef struct edge
{
    int weight;
    int i,j;
} edge;

const int N = 5;
//예제
// const int W[SIZE][SIZE] = 
// {
//     {INF, 7, 4, 6, 1},
//     {INF, INF, INF, INF, INF},
//     {INF, 2, INF, 5, INF},
//     {INF, 3, INF, INF, INF},
//     {INF, INF, INF, 1, INF}
// };
//자작
const int W[SIZE][SIZE] = 
{
    {INF, 4, 2, INF, INF},
    {INF, INF, 3, 2, 3},
    {INF, 1, INF, 4, 5},
    {INF, INF, INF, INF, INF},
    {INF, INF, INF, 1, INF}
};

edge F[SIZE];
int k = 0;

void dijkstra(void);

int main()
{
    dijkstra();

    return 0;
}

void dijkstra(void)
{
    int touch[N];
    int length[N];
    int min;
    int nearest;
    int i, _;

    for(i = 1; i<N; i++)
    {
        touch[i] = 0; //초기화
        length[i] = W[0][i]; //v1 기준으로 초기화
    }

    //v1선택
    for (_ = 0; _ < N - 1; _++)
    {
        min = INF;
        //집합에 없는 정점 중 가장 가까운 정점 선택
        for (i = 1; i < N; i++)
        {
            if (0 <= length[i] && length[i] < min)
            {
                min = length[i];
                nearest = i;
            }
        }

        for (i = 1; i < N; i++)
        {
            if (length[nearest] + W[nearest][i] < length[i])
            {
                length[i] = length[nearest] + W[nearest][i];
                touch[i] = nearest;
            }
        }

        F[k].i = touch[nearest];
        F[k].j = nearest;
        F[k++].weight = length[nearest];
        length[nearest] = -1;   
    } 

    cout << "=== F집합 ===" << endl;
    for(int i = 0; i<k; i++)
    {
        cout << "(v" << F[i].i+1 << ", v" << F[i].j+1 << ") : " << F[i].weight << endl;
    }
}