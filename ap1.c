#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];
    int *plist[5] = {NULL,};        //배열포인터
    plist[0] = (int *)malloc(sizeof(int));      //배열포인터plist[0]에 int만큼만 동적메모리할당
    list[0] = 1;        //list배열에 값 넣기
    list[1] = 100;
    *plist[0] = 200;        //plist[0]이 가리키는 곳에 200 대입 근데 plist가 뭘 가리키게 안해놔서 어딘가에 200넣음
    printf("[----- [곽민정] [2021041021] -----]\n");
    printf("value of list[0] = %d\n", list[0]);     //1
    printf("address of list[0] = %p\n", &list[0]);          //list[0]의 주소, list의 시작주소와같음
    printf("value of list = %p\n", list);                   //배열이름은 시작주소이다. 위와 같은 값이 나온다.
    printf("address of list (&list) = %p\n", &list);        //list의 주소도 list의 시작주소
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);             //list[1]의 값
    printf("address of list[1] = %p\n", &list[1]);          //list[1]의 주소. list의 주소에서 sizeof(int)만큼떨어진곳
    printf("value of *(list+1) = %d\n", *(list + 1));       //list에서 int*1만큼 간 곳에 있는 값, list[1]값이다.
    printf("address of list+1 = %p\n", list+1);             //list+1의 주소 list[1]의 주소
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);         //plist[0]이 가리키는 값 아까 200대입해서 200.
    printf("&plist[0] = %p\n", &plist[0]);                  //plist[0]의 주소
    printf("&plist = %p\n", &plist);                        //plist의 주소
    printf("plist = %p\n", plist);                          //plist의 주소
    printf("plist[0] = %p\n", plist[0]);                    //plist[0]의 값(200이있는 곳의 주소이다.)
    printf("plist[1] = %p\n", plist[1]);                    //plist[1]~plist[4]까지는 모두 NULL을 넣어놔서 주소값을 갖고있지 않다.
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);
    free(plist[0]);             //plist[0] 메모리반환
}