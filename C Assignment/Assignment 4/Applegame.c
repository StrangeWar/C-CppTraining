#include<stdio.h>


void main()
{

    int apple=21;
    int user_in,sys_in;
    int turn = 0;
    printf("*********Apple game**********\n");
    printf("There are 21 apples in the game\n");
    printf(">>>>>>>>Rules of game<<<<<<<<\n");
    printf("1.Pick number of apples between 1(min) to 4(max)\n");
    printf("2.The one who pick the last apple will be the looser\n");
   
    while(1){
         printf("\nUser turn : ");
         scanf("%d",&user_in);
        if(user_in>=1 && user_in<=4)
        {
           if(turn ==0){
             apple = apple - user_in;
            printf("Remaining Apples : %d\n",apple);
            turn =1;
            }
            if(turn == 1){
            sys_in = 5 - user_in;
            apple = apple - sys_in; 
            printf("Computer turn = %d\n",sys_in);
            printf("Remaining apples = %d\n",apple);

            turn = 0; 
            }
            if(apple == 1){
                if(turn == 0) {
                    printf("\n>>You are a looser<<\n");
                    break;
                }
                else {
                    printf("\n>>You are winner<<\n");
                    break;
                }
            }


        }
        else{
            printf("Please Follow the Rules");
        }


    } 
}