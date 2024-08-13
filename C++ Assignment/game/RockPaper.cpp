#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class RPS{
    private:
    int choice;
    int computerChoice;

    void menu(){
        cout << "Enter your choice:\n";
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissor\n";
        cout << "-> ";
        cin>>choice;


        srand(time(0)); 
        computerChoice = rand() % 3 + 1;
    }

    public:
    void play(int n){

        int u_wins = 0;
        int c_wins = 0;
        int rounds = n;

        while(rounds!=0){
            menu();

            if (choice == 1 && computerChoice == 2) {
                cout << "Computer chose paper. You lose.\n";
                c_wins++;
            }
            else if (choice == 1 && computerChoice == 3) {
                cout << "Computer chose Scissor. You win.\n";
                u_wins++;
            }
            else if (choice == 2 && computerChoice == 1) {
                cout << "Computer chose Rock. You win.\n";
                u_wins++;
            }
            else if (choice == 2 && computerChoice == 3) {
                cout << "Computer chose Scissor. You lose.\n";
                c_wins++;

            }
            else if (choice == 3 && computerChoice == 1) {
                cout << "Computer chose Rock. You lose.\n";
                c_wins++;

            }
            else if (choice == 3 && computerChoice == 2) {
                cout << "Computer chose Paper. You win.\n";
                u_wins++;
            }
            else if (choice == computerChoice) {
                cout << "It's a tie.\n";
            }
            rounds--;
            cout << "You have " << rounds << " games left.\n";
        }

        cout<<"\n-------------------RESULT-----------------------------\n";
        cout<<"No. of games you wins: "<<u_wins<<endl;
        cout<<"No. of games computer wins: "<<c_wins<<endl;

        if(u_wins>c_wins){
            cout<<"You Win!\n";
        }
        else if (u_wins < c_wins)
            {
            cout<<"You Lose!";
        }
        else{
            cout<<"It's a tie!";
        }
        
    }

};

int main() {

    int rounds;

    RPS R1;
    cout << "Enter the number of rounds you want to play: ";
    cin >> rounds;
    R1.play(rounds);

 
    

    return 0;
}