#include<stdio.h>

main()
{
	char str[100],*ptr;
	int count;
	
	printf("enter any string:");
	gets(str);
	
	ptr=str;
	count=0;
	while (*ptr !='\0'){
		count++;
		ptr++;
	}
	printf("the length of the string is:%d",count);
	return 0;
}
