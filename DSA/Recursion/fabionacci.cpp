#include <iostream>
using namespace std;

int fabionacci(int num){

    if(num == 0)
        return 0;

    else if(num == 1)
        return 1;

    return fabionacci(num-1) + fabionacci(num-2);
    
}


int main() {

    cout << fabionacci(6);
    cout << endl;
    //fabionacci(6);

    int i = 0;
    while(i != 10){
        cout << fabionacci(i) << " ";
        i++;
    }

    return 0;
}

