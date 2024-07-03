/*8.Write a program of structure
employee that provides the following
b. information -print and display empno,
empname, addressandage 5 times
*/
#include <stdio.h>

struct employee {
    int empno;
    char Ename[20];
    int age;
    char Address[100];
}E[5];

int main() {
	int i;
    for(i=1;i<=5;i++){
    printf("\n\n\t input details for employee [%d] time :  ",i);
    
	
	printf("\n\n\t enter empno.: ");
    scanf("%d",&E[i].empno);
    
    printf("\n\n\t enter employee name: ");
    scanf("%19s",&E[i].Ename);
    
    printf("\n\n\t enter age: ");
    scanf("%d", &E[i].age);
    
    printf("\n\n\t enter address: ");
    scanf("%99s",&E[i].Address);
	}
    
    for(i=1;i<=5;i++){
    	
    printf("\n\n\t details of employee [%d] : " ,i);
    
    
    printf("\n\n\t emp no: %d", E[i].empno);
    printf("\n\n\t employee name: %s", E[i].Ename);
    printf("\n\n\t age: %d", E[i].age);
    printf("\n\n\t address: %s", E[i].Address);
	}
    
    return 0;
}

