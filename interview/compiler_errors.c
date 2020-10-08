/*
A compiler warning indicates you've done something bad, but not something that will prevent the code from being compiled.

You should fix whatever causes warnings since they often lead to other problems that will not be so easy to find.

Example: Your code calls the pow() (raise to a power) library function, but you forgot to include math.h.

Because you've supplied no prototype for the pow() function (its in math.h), the compiler warns you that it assumes pow() returns an int and that it assumes nothing about pow()'s parameters:

somefile.cpp:6: warning:
  implicit declaration of function `int pow(...)'
This is a problem since pow() actually returns a double. In addition, the compiler can't type-check (and possibly convert) values passed to pow() if it doesn't know how many and what type those parameters are supposed to be.

Note: The compiler will label warnings with the word warning so that you can distinguish them from errors.
Compiler Errors
A compiler error indicates something that must be fixed before the code can be compiled.

Example: You forget a semi-colon (;) at the end of a statement and the compiler reports:

somefile.cpp:24: parse error before `something'
Always remember to fix the first few errors or warnings, since they may be causing all the rest.
Compiler messages usually list the file and line number where a problem occurs. Nonetheless, errors often occur on the lines prior to what the error message lists. Especially check the line immediately preceding where the error message indicates.

Finally, note that some compilers may choose to call something an error while others may just call it a warning or not complain at all.compiler warning and errors
*/

#include<stdio.h>
//#include<math.h>
void main()
{
	
printf("pow : %lf\n",pow(2,3))

}
