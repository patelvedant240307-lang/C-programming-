#include <stdio.h>

int main() {
    float grams, kilograms;


    printf("Enter the weight in grams: ");
    scanf("%f", &grams);


    kilograms = grams / 1000;


    printf("Conversation of  grams is equal to %f kilograms.\n",  kilograms);

    return 0;
}
