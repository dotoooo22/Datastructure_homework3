#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
    for(i=0; i < MAX_SIZE; i++)     //input[i]에 i값대입 i:0~99
        input[i] = i;
    printf("[----- [곽민정] [2021041021] -----]\n");
    /* for checking call by reference */
    printf("address of input = %p\n", input);       //input의 시작주소
    answer = sum(input, MAX_SIZE);                  //input배열의 값 합산해서 answer에 넣기
    printf("The sum is: %f\n", answer);             //answer 출력
}
float sum(float list[], int n)      //list[]로 input의 주소를 받음
{
    printf("value of list = %p\n", list);       //list의 값 출력 input주소랑 같다
    printf("address of list = %p\n\n", &list);  //list의 주소
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)      //input 값 합산
        tempsum += list[i];
    return tempsum;         //총합반환
}