/*
4. We have to design application for tourist company.
Tourist company provides cars on rent.
Depends on the running of car they apply rent.
If running is less than 100 kilometres then they charge 25 rupees per kilometre .
And if running is more than 100 kilometres then they apply 15 rupees per kilometre after
100 kilometres.
We have to accept number of kilometres from user and return the estimated rent.
Input : 73
Input : 132
Input : 189
Output : 1825
Output : 2980
Output : 3835
*/

#include<stdio.h>

int TouristBill(int iKilometer)
{
	int iRent = 0;

	if(iKilometer > 100)
	{
		iRent = (iKilometer - 100) * 15;
		iKilometer = 100;  
	}

	iRent += iKilometer * 25;
	return iRent;
}



void Display(int iKilometer,int iAmount)
{
	printf("The rent of travelling %d Kilometers is rupees %d \n",iKilometer,iAmount);
}

int main()
{
	int iKilometer = 0;
	int iAmount = 0;

	printf("Enter the Kilometers\n");
	scanf("%d",&iKilometer);

	iAmount = TouristBill(iKilometer);
	Display(iKilometer,iAmount);
	return 0;
}
