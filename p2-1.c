#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
    for(i=0; i < MAX_SIZE; i++)     //input[i]�� i������ i:0~99
        input[i] = i;
    printf("[----- [������] [2021041021] -----]\n");
    /* for checking call by reference */
    printf("address of input = %p\n", input);       //input�� �����ּ�
    answer = sum(input, MAX_SIZE);                  //input�迭�� �� �ջ��ؼ� answer�� �ֱ�
    printf("The sum is: %f\n", answer);             //answer ���
}
float sum(float list[], int n)      //list[]�� input�� �ּҸ� ����
{
    printf("value of list = %p\n", list);       //list�� �� ��� input�ּҶ� ����
    printf("address of list = %p\n\n", &list);  //list�� �ּ�
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)      //input �� �ջ�
        tempsum += list[i];
    return tempsum;         //���չ�ȯ
}