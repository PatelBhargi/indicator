#include<stdio.h>
void swap(int*,int*);
main()
{
	int a,b;
	printf("enter value for a and b\n");
	scanf("%d%d",&a,&b);
	
	printf("\n\nbefore swapping:a=%d and b=%d\n",a,b);
	swap(&a,&b);
	
	printf("\nafter swapping a=%d and b=%d\n",a,b);
	return 0;
}
 void swap(int *x,int *y)
 {
 	int temp;
	 
	 temp=*x;
	 *x=*y;
	 *y=temp; 
 }
