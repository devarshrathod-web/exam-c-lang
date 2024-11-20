#include <stdio.h>

int main() {
    double height, width, perimeter;
    printf("Enter the height of the rectangle: ");
    scanf("%lf", &height);
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    perimeter = 2 * (height + width);
    printf("The perimeter of the rectangle is: %.2lf\n", perimeter);

    return 0;
}
