#include<stdio.h>

length(char name[50])
{
	int len;
	len = strlen(name);
	return len;
}

main()
{
	char name[50];
	int i;
	
	printf("Enter the string :- ");
	gets(name);

	i = length(name);
	
	printf("Length of string :- %d",i);
}
