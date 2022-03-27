#include<stdio.h>

void Display(int iNO)
{
	int iCnt=0;
	char ch='a';
	
	for(iCnt = 1;iCnt<=iNO;iCnt++)
	{
		printf("%c\t",ch++);
	}
	printf("\n");
}


int main()
{
		int iValue=0;
		
		printf("enter number");
		scanf("%d",&iValue);
		
		Display(iValue);
		
		return 0;
}		