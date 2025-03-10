#include <stdio.h>
#include <stdlib.h>
int main () {
       double a = 10.10;
       double b = 20.20;
       double temp = 0.0;
       printf("a = %lf\n", a);
       printf("b = %lf\n", b);
       temp = a;
       a = b;
       b = temp;
       printf("Here is number after swap: \n");
       printf("a = %lf", a);
       printf("b = %lf", b);
       return 0;
}