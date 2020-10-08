/*
Linker Errors
If you receive a linker error, it means that your code compiles fine, but that some function or library that is needed cannot be found. This occurs in what we call the linking stage and will prevent an executable from being generated. Many compilers do both the compiling and this linking stage.
Example 1: You misspell the name of a function (or method) when you declare, define or call it:

void Foo();

int main()
{
  Foo();
  return 0;
}

void foo()
{
  // do something
}
so that the linker complains:

somefile.o(address): undefined reference to `Foo(void)'
that it can't find it.}
*/

#include<stdio.h>
int Add(int a,int b)
{
return a+b;
}
int main()
{
int a,b;
a=8;
b=9;
printf("add = %d",add(a,b));
}
