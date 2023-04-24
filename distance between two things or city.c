#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,d,distance;
	printf("enter the first number");
	scanf("%f%f",&x1,&y1);
	printf("enter the second number");
	scanf("%f%f",&x2,&y2);
	d=x2-x1*x2-x1+y2-y1*y2-y1;
	distance=sqrt(d);
	printf("distance=%f",d);
	return 0; 
}
