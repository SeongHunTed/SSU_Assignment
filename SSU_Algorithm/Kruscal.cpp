#include <iostream>
using namespace std;
#define SIZE 5
#define INF 9999

typedef struct node
{
    int parent;
    int depth;
} node;

typedef struct edge
{
    int weight;
    int i, j;
} edge;

const int N = 5;

//자작데이터
const int W[SIZE][SIZE] =
{
    {0, 1, 3, INF, INF},
    {1, 0, 7, 3, INF},
    {3, 7, 0, 2, 4},
    {INF, 3, 2, 0, 5},
    {INF, INF, 4, 5, 0}
};

//예제
// const int W[SIZE][SIZE] = 
// {
//     {0, 1, 3, INF, INF},
//     {1, 0, 3, 6, INF},
//     {3, 3, 0, 4, 2},
//     {INF, 6, 4, 0, 5},
//     {INF, INF, 2, 5, 0}
// };

int k = 0;
edge E[SIZE] = {0};
node U[SIZE];

void kruskal(void);
void makeset(int i);
int find(int i);
void merge(int p, int q);
bool equal(int p, int q);
void initial(int n);

int main()
{
    kruskal();

    cout << "===F집합===" << endl;
    for(int i = 0; i<N; i++)
        for(int j = 0; j<N; j++)
            if(i == j)
                continue;
            else if(i == U[j].parent)
                cout << "(v" << i+1 << ", v" << j+1 << ")" << endl;

    return 0;
}

void kruskal(void)
{
    int i,j,p,q;

    for(i = 0; i<N; i++)
        for(j = i+1; j<N; j++)
            if(W[i][j] != INF && W[i][j] != 0)
            {
                E[k].i = i;
                E[k].j = j;
                E[k].weight = W[i][j];
                k++;
            }
    // 가중치가 같을 경우 정점 인덱스 낮은 경우로 하기위해
    // 엣지 가중치 오름차순
    for(i = k-1; i>= 0; i--)
        for(j = i-1; j>=0; j--)
            if(E[i].weight < E[j].weight)
            {
                edge temp = E[i];
                E[i] = E[j];
                E[j] = temp;
            }

    initial(N);

    for(i = 0; i<k; i++)
    {
        p = find(E[i].i);
        q = find(E[i].j);
        if(!equal(p,q))
            merge(E[i].i, E[i].j);
    }
}

//초기화
void makeset(int i)
{
    U[i].parent = i;
    U[i].depth = 0;
}


int find(int i)
{
    int j;

    j = i;
    while(U[j].parent != j)
        j = U[j].parent;

    return j;
}

void merge(int p, int q)
{
    if(U[p].depth == U[q].depth)
    {
        U[p].depth++;
        U[q].parent = p;
    }
    else if(U[p].depth < U[q].depth)
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
    for(int i = 0; i<n; i++)
        makeset(i);
}