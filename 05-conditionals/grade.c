#include <stdio.h>

int main(){

    int grade;

    printf("Enter grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("Grade cannot be lower than zero and higher than 100!");
    }
    else if (grade >= 90)
    {
        printf("A");
    }
    else if (grade >= 80)
    {
        printf("B");
    }
    else if (grade >= 70)
    {
        printf("C");
    }
    else if (grade >= 60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }

    return 0;
}
