#include <stdio.h>
struct student {        //����ü
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};

int main()
{
    struct student pst;     //struct student�� pst ����
    printf("[----- [������] [2021041021] -----]\n");
    printf("size of student = %ld\n", sizeof(struct student));      //struct student�� ũ��(����ü�Ǹ�纯��ũ�����Ѱ�)
    printf("size of int = %ld\n", sizeof(int));                     //int��ũ�����
    printf("size of short = %ld\n", sizeof(short));                 //short��ũ�� ���
    return 0;
}