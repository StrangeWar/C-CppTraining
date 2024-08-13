// 6. Create a class “Mobile” with attributes: brand, price, color, width, height. Use constructor to set
// default values of these attributes. Write function to display details of all attributes

#include<iostream>

using namespace std;

class Mobile{
    public:
    string brand;
    double price;
    string color;
    int width;  
    int height;
    
    Mobile(string b = "Samsung", double p = 50000, string c = "Black", int w = 2.5, int h = 6.7){
        brand = b;
        price = p;
        color = c;
        width = w;
        height = h;
    }


    void display(){
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Color: " << color << endl; 
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        }
    
};

int main(){

    Mobile sum;
    sum.display();
    
}

