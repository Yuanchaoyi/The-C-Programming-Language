#include <stdio.h>

struct point
{
    int x;
    double y;
};

union u
{
    int a;
    double b;
};

int main()
{
    struct point pt={10, 10.5};
    printf("%d\n",sizeof(pt.x));
    printf("%d\n",sizeof(pt.y));
    printf("%d\n",sizeof(pt));

    union u un={10,10.5};
    printf("%d\n",sizeof(un.a));
    printf("%d\n",sizeof(un.b));
    printf("%d\n",sizeof(un));
}

