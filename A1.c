#include<stdio.h>

void Display(int iRow,int iCol)
{
	
	
	int i=0,j=0;
	
	
	for(i=iRow;i>=1;i--)
	{
		for(j=iCol;j>=1;j--)
		{
			if(i<=j)
			{
			printf("*");
			}
			else
			{
			printf("#");
			}
			
		}
		printf("\n");
	}
}

int main()
{
	int iValue=0;
	int iValue1=0;
	
	printf("enter number of rows");
	scanf("%d",&iValue);
	
	printf("enter number of colums");
	scanf("%d",&iValue1);
	
	Display(iValue,iValue1);
	return 0;
}	