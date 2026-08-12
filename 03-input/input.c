#include <stdio.h>

int main(void){

    char name[50];
    int age;
    float height;

    printf("Enter your name: ");
    scanf("%49s", name); // Limit input to 49 characters to prevent buffer overflow
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    return 0;

}