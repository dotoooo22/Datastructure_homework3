#include<stdio.h>
#include<stdlib.h>
void main()
{
    int **x;        //이중포인터 x
    printf("[----- [곽민정] [2021041021] -----]\n");
    printf("sizeof(x) = %lu\n", sizeof(x));         //x의 크기
    printf("sizeof(*x) = %lu\n", sizeof(*x));       //*x의 크기
    printf("sizeof(**x) = %lu\n", sizeof(**x));     //**x의 크기
}