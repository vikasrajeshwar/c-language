#include<stdio.h>
int NonFact(int iNo)
{	
	int iCnt=0;
	
	
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)!=0)
		{
			
			printf("%d\n",iCnt);
		}
    }	
	
}	

int main()
{
	int iValue=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	NonFact(iValue);
    return 0;
}	