#include<stdio.h>
int main ()
{int n;
	printf("enter your grade");
	scanf("%c",&n);
	if((n=='e')||(n=='E'))
	printf("excellent");
	else if ((n=='v')||(n=='V'))
	printf("very good");
	else if ((n=='g')||(n=='G'))
	printf(" good");
	else if ((n=='a')||(n=='A'))
	printf("average");
	else if ((n=='f')||(n=='F'))  
	printf("fail"); 
	return 0;
}
