#include<stdio.h>
int main()
{
        int a[11];
        int b[10];
        int i,k=0,c;
        for(i=0;i<11;i++)
                scanf("%d",&a[i]);
        printf("original array element\n");
        for(i=0;i<11;i++)
                printf("%d\n",a[i]);
        int count = 0;
        for(i=0;i<11;i++)
        {
                if(a[i]%2 != 0 && a[i]!=-1)
                {
                        count++;
                        c = a[i];
                }
                else if(count>0 && a[i]!=-1)
                {
                        b[k++] = a[i-1];
                        b[k++] = a[i];
                        count = 0;
                }
                else if(a[i] != -1)
                {
                        b[k++] = a[i];
                }
        }

if(count>0)
b[k++] = c;
printf("final array element\n");
        for(i=0;i<k;i++)
                printf("%d\n",b[i]);
}
