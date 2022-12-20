//First, take a character,  as input.
//Then take the string,  as input.
//Lastly, take the sentence  as input.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
     char s;
     char ch[100];
     char sh[100];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%c", &s);
    printf("%c\n",s);

    scanf("%s",ch);
    printf("%s\n" , ch);

    scanf("\n%[^\n]%*c", sh);
    printf("%s", sh);
     return 0;
}
