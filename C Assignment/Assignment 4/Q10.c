// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and
// Computer.
// Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A Percentage
// >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

#include <stdio.h>

int main()
{

    float physics, chemistry, biology, mathematics, computer, percentage, total = 0;
    char grade;
    
    printf("Enter marks of physics: ");
    scanf("%f", &physics);
    printf("Enter marks of chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter marks of biology: ");
    scanf("%f", &biology);
    printf("Enter marks of mathematics: ");
    scanf("%f", &mathematics);
    printf("Enter marks of computer: ");
    scanf("%f", &computer);

    total = physics + chemistry + biology + mathematics + computer;
    percentage = total / 5;

    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else if (percentage >= 40)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    printf("Percentage: %.2f\n", percentage);

    return 0;
}