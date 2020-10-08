#include<stdio.h>
#include<stdlib.h>

void bin(int data)
{

	int i;
	printf("bin_data :");
	for(i=7;i>=0;i--)
	printf("%d",((data>>i)&1));
}
void set_bit(int data,int pos)
{
	
	data = data|(1<<pos);
	printf("\nset_bit :%d\n",data);
}
void clear_bit(int data, int pos1)
{
	data = data&~(1<<pos1);
	printf("clear_bit :%d\n",data);
}
void toggle_bit(int data)
{
	data = data ^ (data-1);
	printf("toggle bit : %d\n",data);
}
void nibble_swap(int data)
{
	data = ((  (data<<4) | 0x0f) & ( (data>>4) | 0xf0) );
	printf("nibble swap : %d\n",data);

}
int main()
{
	int pos,pos1,data = 10;
	bin(data);

	printf("enter the pos : ");
	scanf("%d",&pos);
	set_bit(data,pos);

	printf("enter the pos1 : ");
	scanf("%d",&pos1);
	clear_bit(data,pos1);
	toggle_bit(data);
	nibble_swap(data);
}
