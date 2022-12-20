//Pointers in C
//Modify the two values in place and the code stub main() will print their values.

//Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.
#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function
    int z , x;
    z = *a + *b;
    x = *a - *b;
    *a = z;
    *b = abs(x);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
