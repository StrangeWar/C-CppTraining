// 7. Create a class “Mobile” with attributes: brand, price, color. Enter detail of five different mobile.
// (Using Array of object).
// Display total number of mobile having price greater than 5000.
// Display Brand, Price and color for all mobiles for price range 1000 to 10000

#include<iostream>

using namespace std;

class Mobile{
    public:
    string brand;
    int price;
    string color;

    Mobile(string b, int p, string c){
        brand = b;
        price = p;
        color = c;
    }
};

int main(){
    Mobile mobiles[] = {
        Mobile("Samsung", 6000, "Black"),
        Mobile("Apple", 80000, "White"),
        Mobile("Vivo", 1000, "Nova"),
        Mobile("OnePlus", 7000, "Red"),
        Mobile("Xiaomi", 5000, "Blue"),
        };

    int i;
    int count = 0;
    for(i = 0; i < 5; i++){
        if(mobiles[i].price > 5000)
        count++;
    }
    cout << "Total number of mobile having price greater than 5000: " << count <<endl;
    cout<<"---------------------------------------------------------"<<endl;


    for(i=0;i<5;i++){
        if(mobiles[i].price >= 1000 && mobiles[i].price <= 10000){
            cout << "Brand: " << mobiles[i].brand << endl;
            cout << "Price: " << mobiles[i].price << endl;
            cout << "Color: " << mobiles[i].color << endl;
            cout << "-----------------------------"<<endl;
        }
    }

    return 0;
}