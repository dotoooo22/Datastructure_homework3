#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];
    int *plist[5] = {NULL,};        //�迭������
    plist[0] = (int *)malloc(sizeof(int));      //�迭������plist[0]�� int��ŭ�� �����޸��Ҵ�
    list[0] = 1;        //list�迭�� �� �ֱ�
    list[1] = 100;
    *plist[0] = 200;        //plist[0]�� ����Ű�� ���� 200 ���� �ٵ� plist�� �� ����Ű�� ���س��� ��򰡿� 200����
    printf("[----- [������] [2021041021] -----]\n");
    printf("value of list[0] = %d\n", list[0]);     //1
    printf("address of list[0] = %p\n", &list[0]);          //list[0]�� �ּ�, list�� �����ּҿͰ���
    printf("value of list = %p\n", list);                   //�迭�̸��� �����ּ��̴�. ���� ���� ���� ���´�.
    printf("address of list (&list) = %p\n", &list);        //list�� �ּҵ� list�� �����ּ�
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);             //list[1]�� ��
    printf("address of list[1] = %p\n", &list[1]);          //list[1]�� �ּ�. list�� �ּҿ��� sizeof(int)��ŭ��������
    printf("value of *(list+1) = %d\n", *(list + 1));       //list���� int*1��ŭ �� ���� �ִ� ��, list[1]���̴�.
    printf("address of list+1 = %p\n", list+1);             //list+1�� �ּ� list[1]�� �ּ�
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);         //plist[0]�� ����Ű�� �� �Ʊ� 200�����ؼ� 200.
    printf("&plist[0] = %p\n", &plist[0]);                  //plist[0]�� �ּ�
    printf("&plist = %p\n", &plist);                        //plist�� �ּ�
    printf("plist = %p\n", plist);                          //plist�� �ּ�
    printf("plist[0] = %p\n", plist[0]);                    //plist[0]�� ��(200���ִ� ���� �ּ��̴�.)
    printf("plist[1] = %p\n", plist[1]);                    //plist[1]~plist[4]������ ��� NULL�� �־���� �ּҰ��� �������� �ʴ�.
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);
    free(plist[0]);             //plist[0] �޸𸮹�ȯ
}