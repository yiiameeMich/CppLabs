#include <stdio.h>
#include <stdlib.h>

int main() {
    float f1=3.14159265, f2=20000000;
    double d1=3.14159265, d2=20E+125;
    printf(" \nf1=%10.8f\t f2=%f\n", f1,f2);
    printf("f1=%e \tf2=%e", f1,f2);
    printf("\nf1=%g \n \t f2=%g", f1,f2);
    printf("\nd1=%12.9f \td2=%g", d1,d2);
    printf("\nd1=%12.9e d2=%G", d1,d2);

    printf(" \n\nGroup №242\nKukharskyi Mykhailo Olehovych\n16.11.2003");
    return 0;
};