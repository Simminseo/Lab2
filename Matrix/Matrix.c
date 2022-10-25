#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int **matrix_a;
    int **matrix_b;
    int **matrix_sum;

    printf("행렬의 크기 x y 입력 : ");
    scanf("%d %d", &x, &y);

    matrix_a = (int **)malloc(sizeof(int *) * x);
    matrix_b = (int **)malloc(sizeof(int *) * x);
    matrix_sum = (int **)malloc(sizeof(int *) * x);
    for (int i = 0; i < x; i++)
    {
        matrix_a[i] = (int *)malloc(sizeof(int *) * y);
        matrix_b[i] = (int *)malloc(sizeof(int *) * y);
        matrix_sum[i] = (int *)malloc(sizeof(int *) * y);
    }

    printf("행렬 a 입력 : \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d", &matrix_a[i][j]);
        }
    }
    printf("행렬 b 입력 : \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("b[%d][%d] : ", i, j);
            scanf("%d", &matrix_b[i][j]);
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            matrix_sum[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }
    printf("행렬 a, b의 합 \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", matrix_sum[i][j]);
        }
	printf("\n");
    }

    for(int i=0; i<x; i++){
	free(matrix_a[i]);
	free(matrix_b[i]);
     }
    free(matrix_a);
    free(matrix_b);
    free(matrix_sum);
}
