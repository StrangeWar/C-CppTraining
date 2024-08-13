// 7. We want to store the information of different vehicles. Create a class named Vehicle with
// two data member named mileage and price. Create its two subclasses

// *Car with data members to store ownership cost, warranty (by years), seating capacity and
// fuel type (diesel or petrol).
// *Bike with data members to store the number of cylinders, number of gears, cooling type(air,
// liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches)
// Make another two subclasses Audi and Ford of Car, each having a data member to store the
// model type. Next, make two subclasses Bajaj and TVS, each having a data member to store
// the make-type.
// Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership
// cost, warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a
// TVS bike.

#include <iostream>
using namespace std;

class Vehicle{
    protected:
    float mileage;
    float price;

    public:

    void set(){
        cout<<"Enter mileage: ";
        cin>>mileage;
        cout<<"Enter price: ";
        cin>>price;
        
    }

    void display(){
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class Car : Vehicle{
    protected:
    string fuel_type;
    int warranty;
    int seat;
    float ownership_cost;

    public:
    void set(){
        Vehicle::set();
        cout<<"Enter the fuel_type: ";
        cin>>fuel_type;
        cout<<"Enter warranty: ";
        cin>>warranty;
        cout<<"Enter the seat capacity: ";
        cin>>seat;
        cout<<"Enter ownership cost: ";
        cin>>ownership_cost;

    }

    void display(){
        Vehicle::display();
        cout<<"Fuel type: "<<fuel_type<<endl;
        cout<<"Warranty: "<<warranty<<endl;
        cout<<"Seating capacity: "<<seat<<endl;
        cout<<"OwnerShip cost: "<<ownership_cost<<endl;
    }
};


class Bike: public Vehicle{
    protected:
    int cylinder;
    int gear;
    string cooling_type;
    string wheel_type;
    string tank_size;

    public:

    void set(int c, int g, string co, string w, string t){
        cylinder = c;
        gear = g;
        cooling_type = co;
        wheel_type = w;
        tank_size = t;
    }
    void set(){
        Vehicle::set();
        cout<<"Enter the no. of cylinder: ";
        cin>>cylinder;
        cout<<"Enter the no. of gear: ";
        cin>>gear;
        cout<<"Enter the wheel type: ";
        cin>>wheel_type;
        cout<<"Enter tank size: ";
        cin>>tank_size;
    }

    void display(){
        Vehicle::display();
        cout<<"Cylinder: "<<cylinder<<endl;
        cout<<"Gear: "<<gear<<endl;
        cout<<"Cooling type: "<<cooling_type<<endl;
        cout<<"Wheel type: "<<wheel_type<<endl;
        cout<<"Tank size: "<<tank_size<<endl;

    }
};

class Audi: public Car{
    public:
    string model;

    void set(){
        Car::set();
        cout<<"Enter the model: ";
        cin>>model;
    }

    void display(){
        Car::display();
        cout<<"Model: "<<model<<endl;
    }

};

class Ford: public Car{
    public:
    string model;

    void set(){
        Car::set();
        cout<<"Enter the model: ";
        cin>>model;
    }

    void display(){
    Car::display();
    cout<<"Model: "<<model<<endl;
}

};

class Tvs: public Bike{
    public:

    string make_type;
    void set(){
        Bike::set();
        cout<<"Enter the make type: ";
        cin>>make_type;
    }

    void display(){
        Bike::display();
        cout<<"Make_type: "<<endl;
    }
};

class Baja: public Bike{
    public:

    string make_type;

    void set(){
        Bike::set();
        cout<<"Enter the make type: ";
        cin>>make_type;
        
    }

    void display(){
    Bike::display();
    cout<<"Make_type: "<<endl;
    }
};

int main() {

    Audi a;
    Ford f;
    Tvs t;
    Baja b;

    a.set();
    b.set();
    f.set();
    t.set();

    cout<<"-----------Audi--------------------------\n";
    a.display();
    cout<<"-----------Baja--------------------------\n";
    b.display();
    cout<<"-----------Ford--------------------------\n";
    f.display();
    cout<<"-----------Tvs---------------------------\n";
    t.display();

    return 0;
}