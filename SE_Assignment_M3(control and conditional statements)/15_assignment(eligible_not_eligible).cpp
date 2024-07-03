/*15.Write a C program to determine eligibility for admission to a
professionalcourse based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55
and Marksin Chem>=50 and Total in all three subject >=190 or
Total in Maths and Physics >=140 ---- Input the marks obtained
in Physics :65 Input the marks obtained in Chemistry :51 Input the
marks obtained in Mathematics :72 Total marks of Maths, Physics
and Chemistry :188 Total marks of Maths and Physics : 137 The
candidate is not eligible.
*/
#include<stdio.h>
main()
{
	int M,P,C,T,MP;
	
	printf("\n\n\t enter marks in physics : ");
	scanf("%d",&P);
	printf("\n\n\t enter marks in chemistry : ");
	scanf("%d",&C);
	printf("\n\n\t enter marks in maths : ");
	scanf("%d",&M);
	
	T=M+P+C;
	MP=M+P;
	
	printf("\n\n\t candidate's total marks : %d",T);
	printf("\n\n\t candidate's total marks in physics and maths : %d",MP);
	printf("\n\n-------------------------------------");
	
	if(M>=65 && P>=55 && C>=50 && T>=190 && MP>=140)
	{
		printf("\n\n\t candidate is eligible.");
	}else{
		printf("\n\n\t candidate is not eligible.");
		printf("\n\n\t try again");
	}
}
