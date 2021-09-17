

#include<stdio.h>
#include<math.h>


int main() {
    double a;
    scanf("%lf", &a);
    double z1, z2;
    z1 = (a*a+2*a-3+(a+1)*sqrt(a*a-9))/(a*a-2*a-3+(a-1)*sqrt(a*a-9));
    z2 =sqrt((a+3)/(a-3));
    printf("%lf\n", z1);
    printf("%lf\n", z2);
    return 0;
}
