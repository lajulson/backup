#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rev(char s[])
{
	int t=0,i,j;
	for(i=0,j=strlen(s)-1; i<j ;i++,j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}

	printf("after rev  : %s\n",s);


}
int main()
{
	char *str;
	str = (char*)malloc(20*sizeof(char));
	printf("enter data : ");
	gets(str);
	printf("before :  %s\n",str);
	rev(str);
	
}
