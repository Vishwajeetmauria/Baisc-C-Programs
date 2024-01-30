#include <stdio.h>
int main() {
    int a, b, c, d;
    printf("Enter  numbers : ");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    int max, smax;
    if (a > b) {
        max = a;
        smax = b;
    } else {
        max = b;
        smax = a;
    }  if (c > max) {
        max = c;
        smax = max;
    } else if (c > smax) {
        smax = c;
    } if (d > max) {
        smax = max;
        max = d;
    } else if (d > smax) {
        smax = d;
    }
    printf("The second maximum number is: %d\n", smax);
    printf("The maximum number is: %d\n", max);
    return 0;
}
