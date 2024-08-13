#include<iostream>

using namespace std;

class class1{

    public:
    int x = 12;
    
    class1(){
        cout<<"class1 constructor"<<endl;
        cout<<"x = "<<x<<endl;    //valid 
        cout<<"y = "<<y<<endl;    //valid  
        cout<<"z = "<<z<<endl;    //valid

    }

    private:
    int y = 13;

    protected:
    int z = 14;

   
};

class class2: public class1{
   
    public:
    class2(){
        cout<<"class2 constructor"<<endl;
        cout<<"x = "<<x<<endl;          
       // cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }
};


int main()
{

   // class1 obj;
    class2 obj2;

    cout<<obj2.x<<endl;
    
    //cout<<obj.y<<endl;     invalid y is private.
    //cout<<obj.z<<endl;     invalid z is protected.



    return 0;

}