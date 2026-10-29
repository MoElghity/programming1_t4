#include <stdio.h>


int add(int a,int b);

int main(void) {
    printf("the addition functon \n ");

    add(2,3);
    add(4,5);
    add(6,7);
    add(8,9);

    // or printf("%d", add(2,3));
    return 0;
}
int add(int a, int b) {
    printf("%d \n",a+b);
}