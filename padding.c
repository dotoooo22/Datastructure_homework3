#include <stdio.h>
struct student {        //구조체
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};

int main()
{
    struct student pst;     //struct student형 pst 생성
    printf("[----- [곽민정] [2021041021] -----]\n");
    printf("size of student = %ld\n", sizeof(struct student));      //struct student의 크기(구조체의모든변수크기합한값)
    printf("size of int = %ld\n", sizeof(int));                     //int형크기출력
    printf("size of short = %ld\n", sizeof(short));                 //short형크기 출력
    return 0;
}