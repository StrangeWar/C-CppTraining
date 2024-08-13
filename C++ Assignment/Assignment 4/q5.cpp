// Write a program as per following details
// Create one base class HOTEL with following data members
// Hotel_name,
// Hotel_type i.e(Three star,five star)
// City
// Hotel_rate i.e(2000,3000,5000)
// Create one base class FLIGHT with following data members
// Flight_no
// Source city
// Destination city
// Seat no
// Create one sub class PASSENGER derived from HOTEL and FLIGHT with following
// data members Name, Age, city
// Write appropriate member functions in each class and display all information in main

#include <iostream>
using namespace std;

class Hotel{
    public:
    string hotel_name;
    string hotel_city;
    string hotel_type;
    float hotel_rate;

    void set_detail(){
        cout<<"Enter hotel name: ";
        cin>>hotel_name;
        cout<<"Enter city: ";
        cin>>hotel_city;
        cout<<"Enter hotel type: ";
        cin>>hotel_type;
        cout<<"Enter hotel rate: ";
        cin>>hotel_rate;
        cin.ignore();
    }

    void display(){
        cout<<"-----------------------Hotel--------------------------"<<endl;
        cout<<"Hotel name: "<<hotel_name<<endl;
        cout<<"Hotel rate: "<<hotel_rate<<endl;
        cout<<"Hotel city: "<<hotel_city<<endl;
        cout<<"Hotel type: "<<hotel_type<<endl;
    }
};

class Flight{
    public:
    int flight_no;
    string source_city;
    string destination_city;
    string seat_no;

    void set_detail(){
        cout<<"Enter flight number: ";
        cin>>flight_no;
        cout<<"Enter source city: ";
        cin>>source_city;
        cout<<"Enter destination city: ";
        cin>>destination_city;
        cout<<"Enter seat number: ";
        cin>>seat_no;
        cin.ignore();
    }

    void display(){
        cout<<"---------------------------Flight---------------------------------"<<endl;
        cout<<"Flight Number: "<<flight_no<<endl;
        cout<<"Source City: "<<source_city<<endl;
        cout<<"Destination City: "<<destination_city<<endl;
        cout<<"Seat No.: "<<seat_no<<endl;
    }
};


class Passenger : public Hotel, public Flight{
    public:
    string name;
    int age;
    string city;

    void set_detail(){
        Hotel::set_detail();
        Flight::set_detail();
        cout<<"Enter Name: ";
        getline(cin, name);
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter City: ";
        cin>>city;
        cin.ignore();
    }

    void display(){
        Hotel::display();
        Flight::display();
        cout<<"---------------------------Passenger---------------------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"City: "<<city<<endl;
    }
};

int main() {

    Passenger p;
    p.set_detail();
    p.display();
    return 0;
}