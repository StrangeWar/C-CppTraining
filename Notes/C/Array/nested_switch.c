#include <stdio.h>

int main() {

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch>='a' && ch<='z' || ch>='A'&& ch<='Z')
    {
        case 1:
            switch (ch)
            {
                case 'a':case 'e':case 'i':case 'o': case 'u':
                case 'A':case 'E':case 'I':case 'O': case 'U':
                printf("%c is a vowel\n", ch);
                break;
            
            default:
                printf("%c is a consonant\n", ch);
                break;
            }
            break;

        default:
            printf("%c is not an alphabet\n", ch);
            break;
    }
    return 0;

}