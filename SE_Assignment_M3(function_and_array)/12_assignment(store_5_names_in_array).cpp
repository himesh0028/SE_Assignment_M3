//12.WAP to accept 5 students name and store it in array
#include<stdio.h>
#include<string.h>
main()
{
	char name[5][50];
	int i;
	
	for(i=1;i<=5;i++){
		printf("\n\n\t enter student[%d] name : ",i);
		scanf("%s",name[i]);
    }
    
    for(i=0;i<=5;i++){
		printf("\n\n\t student[%d] name : %s ",i+1,name[i]);
		
    }
    
    

}
