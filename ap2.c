#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];        //배열생성
    int *plist[5];      //배열포인터생성
    list[0] = 10;       //list[0]에 10 대입
    list[1] = 11;       //list[1]에 11 대입
    plist[0] = (int*)malloc(sizeof(int));       //plist[0]에 int만큼 메모리할당
    printf("[----- [곽민정] [2021041021] -----]\n");
    printf("list[0] \t= %d\n", list[0]);        //list[0]값 출력
    printf("address of list \t= %p\n", list);   //list 시작주소 출력
    printf("address of list[0] \t= %p\n", &list[0]);        //list[0]의 주소출력
    printf("address of list + 0 \t= %p\n", list+0);         //list[0]의 주소
    printf("address of list + 1 \t= %p\n", list+1);         //list[1]의 주소
    printf("address of list + 2 \t= %p\n", list+2);         //list[2]의 주소
    printf("address of list + 3 \t= %p\n", list+3);         //list[3]의 주소
    printf("address of list + 4 \t= %p\n", list+4);         //list[4]의 주소
    printf("address of list[4] \t= %p\n", &list[4]);        //list[4]의 주소
    free(plist[0]);             //plist[0] 메모리 반환
}