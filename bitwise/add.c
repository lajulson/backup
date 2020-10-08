#include<stdio.h>
#include<string.h>
void add(int a,int b)
{	
	while(b!=0)
	{
		int c = a & b;
		a = a ^ b;
		b = c << 1;
			
	}
	printf("add :%d\n",a);


}
int main()
{
	add(5,8);

}
