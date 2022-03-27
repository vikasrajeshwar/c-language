#include<stdio.h>


int CountMult(int iNo)
{
	int iDigit=0;
	int iCnt=1;
	while(iNo!=0)
	{
			
		iDigit=iNo%10;
		//printf("%d",iDigit);
		iCnt=iCnt*iDigit;
	    iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
		int iValue=0;
	    int iRet=0;
		
		printf("Enter number");
		scanf("%d",&iValue);
		
		iRet=CountMult(iValue);
		printf("%d",iRet);
		
		return 0;
}		