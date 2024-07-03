/*8.Write a program of structure
employee that provides the following
a. information -print and display empno,
empname, addressandage
*/
#include <stdio.h>

struct employee {
    int empno;
    char Ename[20];
    int age;
    char Address[100];
} E;

int main() {
    printf("\n\n\t enter empno.: ");
    scanf("%d", &E.empno);
    
    printf("\n\n\t enter employee name: ");
    scanf("%19s", E.Ename);
    
    printf("\n\n\t enter age: ");
    scanf("%d", &E.age);
    
    printf("\n\n\t enter address: ");
    scanf("%99s", E.Address);
    
    printf("\n\n\t emp no: %d", E.empno);
    printf("\n\n\t employee name: %s", E.Ename);
    printf("\n\n\t age: %d", E.age);
    printf("\n\n\t address: %s", E.Address);
    
    return 0;
}

