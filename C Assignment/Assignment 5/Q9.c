// Write a C program to categorize a grade based on marks using switch case.

#include <stdio.h>

int main()
{

    int marks;
    printf("Enter your marks: \n");
    scanf("%d", &marks);
    switch (marks >= 90 && marks <= 100)
    {
    case 1:
        printf("Grade: A\n");
        break;
    case 0:
        switch (marks >= 80 && marks <= 90)
        {
        case 1:
            printf("Grade: B\n");
            break;
        case 0:
            switch (marks >= 70 && marks <= 80)
            {
            case 1:
                printf("Grade: C\n");
                break;
            case 0:
                switch (marks >= 60 && marks <= 70)
                {
                case 1:
                    printf("Grade: D\n");
                    break;
                case 0:
                    switch (marks >= 50 && marks <= 60)
                    {
                    case 1:
                        printf("Grade: E\n");
                        break;
                    case 0:
                        printf("Grade: F\n");
                        break;
                    
                    default:
                        printf("Fail.\n");
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    default:
        printf("Invalid Marks\n");
        break;
    }

    return 0;
}