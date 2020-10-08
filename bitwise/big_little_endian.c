#include<stdio.h>
int main()
{
	unsigned int a = 1;
	char *c = (char*)&a;
	if(*c)
	printf("little endian\n");
	else
	printf("big endian\n");
}
