#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int x, y;
    printf("행렬의 크기 x y 입력 : ");
    scanf("%d %d", &x, &y);
    vector<vector<int>> vector_a;//(x, vector<int>(y));
    vector<vector<int>> vector_b;//(x, vector<int>(y));
    vector<vector<int>> vector_sum;//(x, vector<int>(y));

    printf("행렬 a 입력 : \n");
    for (int i = 0; i < x; i++)
    {
        vector<int> v;
        for (int j = 0; j < y; j++)
        {
            printf("a[%d][%d] : ", i, j);
           int n;
           scanf("%d", &n);
            v.push_back(n);
        }
        vector_a.push_back(v);
    }

    printf("행렬 b 입력 : \n");
    for (int i = 0; i < x; i++)
    {
        vector<int> v;
        for (int j = 0; j < y; j++)
        {
            printf("b[%d][%d] : ", i, j);
            int n;
            scanf("%d", &n);
            v.push_back(n);
        }
        vector_b.push_back(v);
    }
    //합
    for (int i = 0; i < x; i++)
    {
        vector<int> v;
        for (int j = 0; j < y; j++)
        {
            v.push_back(vector_a[i][j] + vector_b[i][j]);
        }
        vector_sum.push_back(v);
    }
    printf("행렬 a, b의 합 \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", vector_sum[i][j]);
        }
        printf("\n");
    }
}
