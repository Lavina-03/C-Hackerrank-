//For Loop in C
//Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.
//1<=n<=9 ,8 11 -input ,eight nine even odd -output
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{   int a , b;
    scanf("%d\n%d", &a, &b);
//
    int n=0;
    char* arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(n = a;n<=b;n++)
    {
        if(n>9)
        {
            if(n%2 ==0)
               printf("even\n");
            else {
            printf("odd\n");
            }
        }
        else {
          puts(arr[n]);
        }
    }

    return 0;
}


