#include<stdio.h>
#include<ctype.h>

int main()
{
	int ctr=0;
	char str[]="The function that prints a string \n followed by a new line \n 0-puts_recursion.c. \n";	
	printf("\n Task number one 0-puts_recursion.c :\n");  
    printf("----------------------------------------------------\n");	
	while (isprint(str[ctr]))
	{
		putchar (str[ctr]);
		ctr++;
	}
	printf("\n\n");
	return 0;
}
