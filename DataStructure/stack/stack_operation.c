#include<stdio.h>
int MAX =10;
int top =-1;
int stack[10];

int isempty()
{
	if(top == -1)
	return 1;
	else
	return 0;
}
int isfull() 
{
	if(top==MAX)
	return 1;
	else
	return 0;
}
int peek()
{
	return stack[top];
}
int push(int data)
{	
	if(!isfull())
	{
	top++;
	stack[top] = data;
	}
	else
	{
	printf("stack is full\n");
	}

}
int pop()
{	int data;
	if(!isempty())
	{
	 data = stack[top];
	top = top-1;
//	printf("%d\n",data);
	return data;
	}
	else
	{
	printf("stack is empty\n");
	}

}
int main()
{
push(1);
push(2);
push(3);
push(4);
push(5);
push(6);
push(7);

printf("top of the stack :%d\n ", peek());	
while(!isempty())
{
	int data ;
	data = pop();
	printf("poped item  : %d\n", data);
}
}
