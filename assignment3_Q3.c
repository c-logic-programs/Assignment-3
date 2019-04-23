/*
3. Design application for school management system.
As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different.
For first standard fees are 8900, for second standard 12790, for third standard 21000 and
for fourth standard fees are 23450.
We have to accept standard from user and display the corresponding fees.

Input : 2
Input : 4
Input : 6
Output : 12790
Output : 23450
Output : Wrong input

*/

#include<stdio.h>

int SchoolFees(int iStandard)
{
	int iRet = 0;
	switch(iStandard)
	{	
		case 1:
			iRet = 8900;
		break;
		
		case 2:
			iRet = 12790;
		break;

		case 3:
			iRet = 21000;
		break;

		case 4:
			iRet = 23450;
		break;

		default:
			iRet = -1;	
	}	

	return iRet;	
}



void Display(float iFees,int iStandard)
{
	if(iFees == -1)
	{
		printf("Wrong Input");
		return;
	}
	
	printf("The fees of standard %d is amount is %f \n",iStandard,iFees);
}

int main()
{
	int iStandard = 0;
	int iFees = 0;

	printf("Enter the Standard\n");
	scanf("%d",&iStandard);

	iFees = 	SchoolFees(iStandard);
	Display(iFees,iStandard);
	return 0;
}
