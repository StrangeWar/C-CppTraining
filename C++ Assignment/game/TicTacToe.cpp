#include <iostream>
using namespace std;

class TTT{
    private:
        char board[3][3] = {{'1', '2', '3'},
                            {'4', '5', '6'},
                            {'7', '8', '9'}};
        int choice;
        char turn = 'X';
        int row, column;
        bool draw = false;

        void display_board(){
            cout<< "\n\n----------------------------TIC--TAC--TOE-----------------------------------\n\n";
            cout << "Player 1 as X" << endl;
            cout << "Player 2 as O" << endl;
            cout << "\n\n" << board[0][0] << "  | " << board[0][1] << " | " << board[0][2] << endl;
            cout << "---|---|----" << endl;
            cout << board[1][0] << "  | " << board[1][1] << " | " << board[1][2] << endl;
            cout << "---|---|----" << endl;
            cout << board[2][0] << "  | " << board[2][1] << " | " << board[2][2] << endl;
            cout << "\n\n";
        }

        void playerTurn(){
            if(turn == 'X'){
                cout << "Player 1's turn: ";
                cin >> choice;
            }
            else{
                cout << "Player 2's turn: ";
                cin >> choice;
            }
            
            switch(choice){
                case 1: row = 0; column = 0; break;
                case 2: row = 0; column = 1; break;
                case 3: row = 0; column = 2; break;
                case 4: row = 1; column = 0; break;
                case 5: row = 1; column = 1; break;
                case 6: row = 1; column = 2; break;
                case 7: row = 2; column = 0; break;
                case 8: row = 2; column = 1; break;
                case 9: row = 2; column = 2; break;
                default: 
                    cout << "Invalid choice. Please enter a number between 1 and 9.";
                    playerTurn(); 
                    return;
            }

            if (board[row][column] != 'X' && board[row][column] != 'O'){
                board[row][column] = turn;
                turn = (turn == 'X') ? 'O' : 'X';
            }
            else{
                cout << "Box is already filled. Please choose another." << endl;
                playerTurn();
            }
        }

        bool gameOver(){
            for(int i = 0; i < 3; i++){
                if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
                    return false;
                if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
                    return false;
            }

            if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
                return false;
            if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
                return false;

            for(int i = 0; i < 3; i++)
                for(int j = 0; j < 3; j++)
                    if(board[i][j] != 'X' && board[i][j] != 'O')
                        return true;

            draw = true;
            return false;
        }

    public:
        void game(){
           while(gameOver()){
                display_board();
                playerTurn();  
            }
            display_board();  
            if(draw){
                cout << "GAME DRAW" << endl;
            }
            else{
                
                char winner = (turn == 'X') ? 'O' : 'X';
                cout << "Congratulations! Player with '" << winner << "' has won the game!" << endl;
            }
        }
};

int main() {

    TTT t;
    t.game();

    return 0;
}
