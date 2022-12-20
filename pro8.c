//Sum of Digits of a Five Digit Number
//Print the sum of the digits of the five digit number.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {




int n,sum;
scanf("%d", &n);
sum = n%10 + (n%100)/10 + (n%1000)/100 + (n%10000)/ 1000 + n/10000 ;
printf("%d",sum);
return 0;
}
