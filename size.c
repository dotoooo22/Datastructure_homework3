#include<stdio.h>
#include<stdlib.h>
void main()
{
    int **x;        //���������� x
    printf("[----- [������] [2021041021] -----]\n");
    printf("sizeof(x) = %lu\n", sizeof(x));         //x�� ũ��
    printf("sizeof(*x) = %lu\n", sizeof(*x));       //*x�� ũ��
    printf("sizeof(**x) = %lu\n", sizeof(**x));     //**x�� ũ��
}