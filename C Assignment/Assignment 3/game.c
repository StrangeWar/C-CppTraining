#include <stdio.h>

int main() {

    int user, pc;
    int apple = 21;
    int user_apple=0;
    int pc_apple=0;

    while(apple>0){
        printf("Enter value between 1 and 4: ");
        scanf("%d", &user);
        apple -= user;
        user_apple+=user;

        pc = 5-user;
        printf("Computer chose: %d\n", pc);
        apple -= pc;
        printf("Apple left: %d\n", apple);
        pc_apple+=pc;
    }

    if(user_apple > pc_apple){
        printf("You win!\n");
    }
    else if(user_apple < pc_apple){
        printf("You lose!\n");
        }
    else{
        printf("It's a tie!\n");
        }
    
    return 0;
}