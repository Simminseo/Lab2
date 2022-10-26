#include <stdio.h>
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
        printf("name = %s, middle = %d, final = %d\n",
               (*(struct student **)arr)->name,
               (*(struct student **)arr)->mid,
               (*(struct student **)arr)->final);
}

int main()
{
    int num;
    int i = 0;
    printf("입력할 학생 수 : ");
    scanf("%d", &num);
    char *p_name = (char *)malloc(sizeof(char) * (num * 30));
    struct student *tree = (struct student *)malloc(sizeof(struct student) * num);
    struct student **ref;

    for (i = 0; i < num; i++)
    {
        // while(scanf("%s %d %d", p_name, &tree->mid, &tree->final ) !=EOF && i++ < num)
        {
            printf("이름, 중간점수, 기말점수\n");
            scanf("%s %d %d", p_name, &tree->mid, &tree->final);
            tree->name = p_name;

            ref = (struct student **)tsearch((void *)tree, (void **)&root, compare);
            printf("%s ", (*(struct student **)ref)->name);
            if (*ref == tree)
                printf("= 추가되었습니다.\n");
            else
                printf("= 이미 존재합니다.\n");
            p_name += strlen(p_name) + 1;
            tree++;
        }
        twalk((void *)root, print_node);
    }
}
