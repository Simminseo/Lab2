#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>

struct student
{
    char *name;
    int mid;
    int final;
};

struct student *root = NULL;

int compare(const void *cp1, const void *cp2)
{
    return strcmp(((struct student *)cp1)->name, ((struct student *)cp2)->name);
}
void print_node(const void *arr, VISIT order, int level)
{
    if (order == preorder || order == leaf)
        printf("이름 = %s, 중간시험 점수 = %d, 기말시험 점수 = %d\n",
               (*(struct student **)arr)->name,
               (*(struct student **)arr)->mid,
               (*(struct student **)arr)->final);
}

int main()
{
    struct student **ref;
    int num;
    printf("학생수 입력 : ");
    scanf("%d", &num);

    struct student *tree[num];

    for (int i = 0; i < sizeof(tree) / sizeof(struct student *); i++)
    {
        tree[i] = malloc(sizeof(struct student));
        // printf("이름 : ");
        // scanf(" %s", tree[i]->name);
        // printf("중간점수 : ");
        // scanf("%d", &tree[i]->mid);
        // printf("기말점수 : ");
        // scanf("%d", &tree[i]->final);
        printf("이름, 중간점수, 기말점수 \n");
        scanf("%s %d %d", tree[i]->name, &tree[i]->mid, &tree[i]->final);

        ref = (struct StudentData **)tsearch((void *)tree[i], (void **)&root, compare);
        printf("%s", (*ref)->name);

        if (*ref == tree[i])
            printf("추가되었습니다.\n");
        else
            printf("이미 존재합니다.\n");
    }
    twalk((void *)root, print_node);

    for (int i = 0; i < sizeof(tree) / sizeof(struct StudentData *); i++)
    {
        free(tree[i]);
    }
}

