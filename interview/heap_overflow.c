#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	for(int i =0;i<100000000;i++)
	{
		ptr = (int*)malloc(sizeof(int)); 
	}
	free(ptr);

}
