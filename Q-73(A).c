#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)  //rows
    {
	  for(j=1;j<=i;j++) //COLUMNS
	 {
	printf("*");
	 }
	 printf("\n");
	}	
	return 0;
}
