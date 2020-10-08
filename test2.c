#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int processArray(int array[], int len) {
        int i,k=0,c;
        int count = 0;
        for(i=0;i<len;i++)
        {
                if(array[i]%2 != 0 && array[i]!=-1)
                {
                        count++;
                        c = array[i];
                }
                else if(count>0 && array[i]!=-1)
                {
                        array[k++] = array[i-1];
                        array[k++] = array[i];
                        count = 0;
                }
                else if(array[i] != -1)
                {
                        array[k++] = array[i];
                }
        }

if(count>0)
array[k++] = c;
len = k;
return len;
}

int main() {
  int *array;
  int len = 0, maxsize = 1024, i, input, new_len;
  int result;
  array = (int *)malloc(maxsize*sizeof(int));
  while(scanf("%d", &input) == 1) {
    if (input < 0) break; /* Stop when a negative number is entered */
    array[len++] = input;
    if (len == maxsize) { /* array is full. increase size */
      maxsize *= 2;
      array = (int *)realloc(array, maxsize*sizeof(int));
    }
  }
  new_len = processArray(array, len);
  for(i=0; i<new_len; i++)
    printf("%d\n", array[i]);
  return 0;
}


