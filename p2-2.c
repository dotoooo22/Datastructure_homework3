#include <stdio.h>
void print1 (int *ptr, int rows);
int main()
{
    int one[] = {0, 1, 2, 3, 4};        //one배열 생성 , 초기화
    printf("[----- [곽민정] [2021041021] -----]\n");
    printf("one = %p\n", one);
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    print1(&one[0], 5);     //one의 주소와 배열수를 보냄
    return 0;
}
void print1 (int *ptr, int rows)        //포인터변수 ptr로 one의 주소를 받음
{/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)          //ptr+i의 주소와 ptr+i가 가리키는 곳의 값 출력
        printf("%p \t %5d\n", ptr + i, *(ptr + i));
    printf("\n");
}