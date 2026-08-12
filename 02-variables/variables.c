#include <stdio.h>


int main(void){

    char name[] = "Aaron";
    int age = 27;
    float height = 1.75;
    char grade = 'A';

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}