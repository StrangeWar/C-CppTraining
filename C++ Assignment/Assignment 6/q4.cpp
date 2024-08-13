// Polymorphic Behavior in a Container: Create a base class Vehicle with a virtual function
// describe(). Derive classes Car and Bike from Vehicle, and override the describe()
// function. Store objects of Car and Bike in a std::vector<Vehicle*> and call the describe()
// function on each element of the vector.

#include <iostream>
#include <vector>

class Vehicle{
    public:
    virtual void describe(){
        std::cout << "This is a vehicle" <<std::endl;
    }
};

class Bike : public Vehicle{
    public:
    void describe(){
        std::cout << "This is a bike" <<std::endl;
        }
};

class Car : public Vehicle{
    public:
    void describe(){ 
        std::cout<<"This is a car."<<std::endl;
    }
};

int main() {

    std::vector<Vehicle*> V1 = {new Bike, new Car, new Bike};
    for (auto v : V1) {
        v->describe();
    }

    

    return 0;
}