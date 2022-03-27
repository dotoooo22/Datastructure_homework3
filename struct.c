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
} student2;     //typedef로 student2 데이터타입을 만들었다.

int main() {
    struct student1 st1 = {'A', 100, 'A'};      //typedef안해서 struct student1을 다 써야한다.

    printf("[----- [곽민정] [2021041021] -----]\n");

    printf("st1.lastName = %c\n", st1.lastName);        //st1정보 출력
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'};             //typedef로 student2 데이터타입을 만들어서 student2형 st2 생성

    printf("\nst2.lastName = %c\n", st2.lastName);      //st2정보출력
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    student2 st3;

    st3 = st2;      //st3에 st2 대입
    
    printf("\nst3.lastName = %c\n", st3.lastName);  //st2랑 같은 결과가 나옴
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    /* equality test */
    /*
    if(st3 == st2)  //not working       //이렇게 equality 비교 불가능
        printf("equal\n");
    else
        printf("not equal\n");
    */
    return 0;
}