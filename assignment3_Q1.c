/*
1. Design application for hotel. According to the management team of hotel they are giving
discount on total bill amount of customer.
If bill bill amount is less than 500 then there is no discount , if bill amount is less than 1500
and more than 500 they give 10% discount.
And if the bill amount is more than 1500 then they give 15% discount.
Our application should accept total bill amount and depends on the discount policy we have
to return the amount after applying discount.
Input : 1200
Input : 290
Input : 3700

Output : 1080
Output : 290
Output : 3145
*/

#include<stdio.h>

float CalculateBill(int Amount)
{
	float fRet = 0.0f;

	if(Amount < 500)
	{
		fRet = Amount; 
		printf("less than 500 \n");
	}
	else if(Amount > 500 && Amount <= 1500)
	{
		fRet = Amount - (Amount/10);
		printf("between 500 & 1500 \n");
	}
	else if(Amount > 1500)
	{
		fRet = Amount - (Amount/15);
		printf("greater than 1500 \n");
	}

	return fRet;
}

int main()
{
	int Amount = 0;
	printf("Enter the bill amount \n");
	scanf("%d",&Amount);
	
	printf("Bill amount is %f \n",CalculateBill(Amount));

	return 0;
}
