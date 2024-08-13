// Q3. Write a C program to find frequency of each digit in a given integer.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {   
    char input[1000];   
    int num[10] = {0};
    printf("Enter the number: ");
    scanf("%s",input);
    int input_len = strlen(input);
    
    for(int i=0;i<input_len;i++){
        if(input[i]>='0'&&input[i]<='9'){
            int n = (input[i]-'0');
            num[n]++;
        }
    }
    for(int i=0; i<10;i++){
        printf("%d ",num[i]);
    }
        
    return 0;
}
