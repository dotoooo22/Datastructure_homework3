#include <stdio.h>
struct student1 {
    char lastName;
    int studentId;
    char grade;
};
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;     //typedef�� student2 ������Ÿ���� �������.

int main() {
    struct student1 st1 = {'A', 100, 'A'};      //typedef���ؼ� struct student1�� �� ����Ѵ�.

    printf("[----- [������] [2021041021] -----]\n");

    printf("st1.lastName = %c\n", st1.lastName);        //st1���� ���
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'};             //typedef�� student2 ������Ÿ���� ���� student2�� st2 ����

    printf("\nst2.lastName = %c\n", st2.lastName);      //st2�������
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    student2 st3;

    st3 = st2;      //st3�� st2 ����
    
    printf("\nst3.lastName = %c\n", st3.lastName);  //st2�� ���� ����� ����
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    /* equality test */
    /*
    if(st3 == st2)  //not working       //�̷��� equality �� �Ұ���
        printf("equal\n");
    else
        printf("not equal\n");
    */
    return 0;
}