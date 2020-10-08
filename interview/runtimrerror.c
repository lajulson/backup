/*
Run-Time Errors
Run-time errors only occur when you run a program, and thus, they can only occur if there is a program to run (i.e., it must have compiled and linked without errors). When you run the executable and something goes wrong then we call it a run-time error. There are two main types of run-time errors:
Fatal Errors
A fatal error is basically when the executable crashes.

Example 1: The program divided by zero, as in:

int scores = 500;
int num = 0;
int avg;
avg = scores / num;
The program would crash saying:

Floating exception
Example 2: Segmentation faults, Bus errors.

These occur when you try to access memory that your program is not allowed to use or that doesn't exist in the computer (i.e., there is only so much memory in the computer).

Aside: Even virtual memory has limits.
Your program will crash giving the "Segmentation fault" or "Bus error" message.

These errors often occur due to improper use of arrays or pointers.

Example: Using an uninitialized array index...

int values[10];
int i;
cout << "The ith value is: " << values[i] << endl;
may cause such an error. These, particularly, are tricky since they may or may not occur based on what the initial garbage value of the index is when you run the program. Remember, you cannot generally assume variables get initialized to zero.
Logic Errors
A logic error occurs when your program simply doesn't do what you want it to.

Example: You have an infinite loop because you did not update the variable(s) used in the condition of a loop, as in:

cin >> account_num;

Assume user did not enter -1.

while (account_num != -1) {
  cout << "Account #: " << account_num << endl;
  ProcessAccount(account_num);
  // Oops...Forgot to read another account # here!
}
*/

#include<stdio.h>
int main()
{
	int a,b,i;
	int arr[10];
	int *p;
	p=2;
	a=8;
	b =0;
//	printf("%d",a/b); // floating point exception
	printf("%d",arr[i]);
	printf("%d",*p<<1);//invalid memory access
	//while(1)  //logical error
	//printf("welcome...");
}
