/*19.Write a program in C to calculate and print the electricity bill of a
given customer. The customer ID, name, and unit consumed by
the user should be captured from the keyboard to display the
total amount to be paid to thecustomer. The charge are as follow
:
20. Unit |21. Charge/unit
22. upto 350| 23. @1.20
24. 350 and above but less than 600|25. @1.50 
26. 600 and above but less than 800|27. @1.80
28. 800 and above| 29. @2.00
*/
#include<stdio.h>
main()
{
	int U;
	
	printf("\n\n\t enter number of unit consumed : ");
	scanf("%d",&U);
	
	
	if(U<350){
		printf("\n\n\t your electricity bill is : %f",U*1.20);
	}else if(U>=350 && U<600){
		printf("\n\n\t your electricity bill is : %f",U*1.50);
	}else if(U>=600 && U<800){
		printf("\n\n\t your electricity bill is : %f",U*1.80);
	}else{
		printf("\n\n\t your electricity bill is : %f",U*2.00);
	}
	
	
}
