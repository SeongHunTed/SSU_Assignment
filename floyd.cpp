#include <iostream>
using namespace std;
#define NUM 6
#define INF 100000

void floyd2(void);
void path(int q, int r);

int W[NUM][NUM]{
    {0, 0, 0, 0, 0, 0},
    {0, 0, 1, INF, 1, 5},
    {0, 9, 0, 3, 2, INF},
    {0, INF, INF, 0, 4, INF},
    {0, INF, INF, 2, 0, 3},
    {0, 3, INF, INF, INF, 0}
};

int D[NUM][NUM]{
    {0, 0, 0, 0, 0, 0},
    {0, 0, 1, INF, 1, 5},
    {0, 9, 0, 3, 2, INF},
    {0, INF, INF, 0, 4, INF},
    {0, INF, INF, 2, 0, 3},
    {0, 3, INF, INF, INF, 0}
};

int P[NUM][NUM] = {0};

int main(void)
{
    floyd2();
    for (int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            cout << P[i][j];
        }
        cout << endl;
    }
    return 0;
}

void path(int q, int r)
{
    cout << "path(" << q << ", " << r << ") = " << P[q][r] << endl;
    if(P[q][r] != 0)
    {
        path(q, P[q][r]);
        cout << "v" << P[q][r] << endl;
        path(P[q][r], r);
    }
}

void floyd2(void)
{
    // W -> 가중치 행렬
    // D -> vi->vj까지 가는 최소 가중치
    // P -> vi->vk까지 가는데 중간에 거치는 정점중에 최고 차수
    // vi -> vk -> vj 까지의 가중치 계산

    for(int k = 0; k < NUM; k++)
         for(int i = 0; i < NUM; i++)
            for(int j = 0; j < NUM; j++)
                if(D[i][k] + D[k][j] < D[i][j])
                {
                    P[i][j] = k;
                    D[i][j] = D[i][k] + D[k][j];
                }
    path(2,1);
}

