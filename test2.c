#include <stdio.h>
#include <stdlib.h>

#define square(X)   (X*X)
/* rudimentary calculator */
int main()
{
    int a,b;
    b = 2;
    a = square(b);
    printf("%d\n",a);
    return 0;
}
