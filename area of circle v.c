#include <stdio.h>

int main() {
    float radius, area;


    printf("Enter the radius of the circle ");
    scanf("%f", &radius);


    area = (22.0 / 7.0) * radius * radius;


    printf(" finded Area of the circle is %.2f\n", area);

    return 0;
}
