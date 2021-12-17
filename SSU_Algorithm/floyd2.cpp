#include <iostream>

using namespace std;
#define NUM 6
#define INF 9999
/*
Test case 3
5
0 10 5 inf inf
inf 0 2 1 inf
inf 3 0 9 2
inf inf inf 0 4
7 inf inf 5 0
*/
void floyd2(void);
void path(int q, int r);

int W[NUM][NUM] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 10, 5, INF, INF},
    {0, INF, 0, 2, 1, INF},
    {0, INF, 3, 0, 9, 2},
    {0, INF, INF, INF, 0, 4},
    {0, 7, INF, INF, 5, 0}};

//D 배열 미리 초기화  W = D; 부분
int D[NUM][NUM] = {
    {0, 0, 0, 0, 0, 0},
    {0, 0, 10, 5, INF, INF},
    {0, INF, 0, 2, 1, INF},
    {0, INF, 3, 0, 9, 2},
    {0, INF, INF, INF, 0, 4},
    {0, 7, INF, INF, 5, 0}};

int P[NUM][NUM] = {0};

int main(void)
{
    cout << "경로 출력!" << endl;
    floyd2();
    cout << endl;

    cout << "W행렬을 출력합니다!" << endl;
    cout << "============" << endl;
    for(int i = 0; i < NUM; i++){
        for(int j =0; j < NUM; j++)
            {cout << W[i][j] << " ";}
        cout << endl;}
    cout << endl;

    cout << "D행렬을 출력합니다!" << endl;
    cout << "============" << endl;
    for (int i = 0; i < NUM; i++){
        for (int j = 0; j < NUM; j++)
            {cout << D[i][j] << " ";}
        cout << endl; }
    cout << endl;

    cout << "P행렬을 출력합니다!" << endl;
    cout << "============" << endl;
    for (int i = 0; i < NUM; i++){
        for (int j = 0; j < NUM; j++)
            {cout << P[i][j] << " ";}
        cout << endl;}
    cout << endl;

    return 0;
}

void path(int q, int r)
{   

    cout << "path(" << q << ", " << r << ") = " << P[q][r] << endl;
    if (P[q][r] != 0)
    {
        path(q, P[q][r]);
        cout << "거치는 정점중 최고 정점 : v" << P[q][r] << endl;
        path(P[q][r], r);
    }
}

void floyd2(void)
{
    // W -> 가중치 행렬
    // D -> vi->vj까지 가는 최소 가중치
    // P -> vi->vk까지 가는데 중간에 거치는 정점중에 최고 차수
    // vi -> vk -> vj 까지의 가중치 계산

    for (int k = 1; k < NUM; k++)
        for (int i = 1; i < NUM; i++)
            for (int j = 1; j < NUM; j++)
                if (D[i][k] + D[k][j] < D[i][j])
                {
                    P[i][j] = k;
                    D[i][j] = D[i][k] + D[k][j];
                }
    path(1, 4);
}