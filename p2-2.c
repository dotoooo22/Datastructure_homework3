#include <stdio.h>
void print1 (int *ptr, int rows);
int main()
{
    int one[] = {0, 1, 2, 3, 4};        //one�迭 ���� , �ʱ�ȭ
    printf("[----- [������] [2021041021] -----]\n");
    printf("one = %p\n", one);
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    print1(&one[0], 5);     //one�� �ּҿ� �迭���� ����
    return 0;
}
void print1 (int *ptr, int rows)        //�����ͺ��� ptr�� one�� �ּҸ� ����
{/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)          //ptr+i�� �ּҿ� ptr+i�� ����Ű�� ���� �� ���
        printf("%p \t %5d\n", ptr + i, *(ptr + i));
    printf("\n");
}