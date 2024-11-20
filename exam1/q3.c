#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);


    if (a > b) {
        if (a > c) {
            if (a > d) {
                printf("The maximum number is: %d\n", a);
            } else {
                printf("The maximum number is: %d\n", d);
            }
        } else {
            if (c > d) {
                printf("The maximum number is: %d\n", c);
            } else {
                printf("The maximum number is: %d\n", d);
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                printf("The maximum number is: %d\n", b);
            } else {
                printf("The maximum number is: %d\n", d);
            }
        }  else {
            if (c > d) {
                printf("The maximum number is: %d\n", c);
            } else {
                printf("The maximum number is: %d\n", d);
            }
        }
    }

    return 0;
}
