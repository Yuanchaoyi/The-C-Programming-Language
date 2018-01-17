#include <stdio.h>
/* copy input to output; 1st version */

#define length 10

void test0(void);
int test1(int s[]);

int main(){
    int i,j;
    int a =1;
    int b =1;
    int c;

    int num[length];
    num[2]=1;

    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            if (a==b){
                b++;
                goto found;
            }
        }
        printf("get in");
    }
    found: printf("hello world\n");
    printf("go on\n");
    test0();
    c = test1(num);
    printf("%d \n",c);
}

void test0(void){
    printf("test\n");
}

int test1(int s[]){
    return s[2];
}
