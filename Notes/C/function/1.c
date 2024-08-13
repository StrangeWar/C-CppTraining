#include <stdio.h>

void func();  //function prototype

int main() {

    func();  // function calling

    return 0;
}

void func(){
    printf("Hello World!\n");  //function body
}