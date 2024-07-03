//9. WAP to show difference between Structure and Union.
#include<stdio.h>
#include <string.h>

// Structure definition
struct EmployeeStruct {
    int empno;
    char name[20];
    float salary;
};

// Union definition
union EmployeeUnion {
    int empno;
    char name[20];
    float salary;
};

int main() {
    // Structure example
    struct EmployeeStruct empStruct;
    empStruct.empno = 101;
    strcpy(empStruct.name, "John");
    empStruct.salary = 50000.0;

    printf("Structure:\n");
    printf("empno: %d\n", empStruct.empno);
    printf("name: %s\n", empStruct.name);
    printf("salary: %.2f\n", empStruct.salary);

    // Union example
    union EmployeeUnion empUnion;
    empUnion.empno = 102;
    printf("\nUnion:\n");
    printf("empno: %d\n", empUnion.empno);

    strcpy(empUnion.name, "Doe");
    printf("name: %s\n", empUnion.name);
    
    empUnion.salary = 60000.0;
    printf("salary: %.2f\n", empUnion.salary);

    // Demonstrating memory sharing in union
    printf("\nUnion after setting salary:\n");
    printf("empno: %d\n", empUnion.empno);  // This will give unexpected result
    printf("name: %s\n", empUnion.name);    // This will also give unexpected result
    printf("salary: %.2f\n", empUnion.salary);

    return 0;
}

