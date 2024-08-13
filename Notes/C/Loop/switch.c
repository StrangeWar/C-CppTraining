// print vowel and consonant using switch case.

#include <stdio.h>

int main() {

    char a;

    printf("Enter: ");
    scanf("%c", &a);
    switch (a) {
        case 'a':
        case 'e':   
        case 'i':
        case 'o':
        case 'u':
        printf("Vowel");
        break;
        default:
            if (a>='a' && a<='z' || a>='A'&&a<='Z')
            {
                printf("Consonant");
            }
            else{
                printf("Invalid");
            }
            break;

        }

    return 0;
}