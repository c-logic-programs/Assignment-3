/*
2. Design application for income tax department to calculate tax amount. According to the
income tax department there is no income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20% tax.
And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax amount.

Input 600000
Input 450000
Input 1200000
Input 8200000

Output 10000  (0 + 10000)
Output 0  
Output 90000 (0 + 50000 + 40000)
Output 2110000 (0 + 50000 + 200000 + 1860000)

*/

#include<stdio.h>

float IncomeTax(int Amount)
{
	float fRet = 0.0f;

	if(Amount <= 500000)
	{
		fRet = 0; 
   }
	else if(Amount > 500000 && Amount <= 1000000)
	{
		fRet = (Amount - 500000) * 0.1;	
	}
	else if(Amount > 1000000 && Amount <= 2000000)
	{
		fRet = ((Amount - 1000000) * 0.2 + (500000 * 0.1));
	}
	else
	{
		fRet = ( ((Amount - 2000000) * 0.3) + (1000000 * 0.2) + (500000 * 0.1));
	}

	return fRet;
}

int main()
{
	int Amount = 0;
	printf("Enter the income amount \n");
	scanf("%d",&Amount);
	
	printf("Tax amount is %f \n",IncomeTax(Amount));

	return 0;
}
