#include<stdio.h>


int countDiff(int iNo)
{
	int iDigit=0;
	int isev=0;
	int isod=0;
	int isum=0;
	while(iNo!=0)
	{
			
		iDigit=iNo%10;
		//printf("%d",iDigit);
		if((iDigit%2)==0)
		{  
			isev=isev+iDigit; 
		}
		else if((iDigit%2)!=0) 
		{
			isod=isod+iDigit;
		}	
	    iNo=iNo/10;
		isum = isev-isod;
	}
	return isum;
}

int main()
{
		int iValue=0;
	    int iRet=0;
		
		printf("Enter number");
		scanf("%d",&iValue);
		
		iRet=countDiff(iValue);
		printf("%d",iRet);
		
		return 0;
}		