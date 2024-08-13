// Write a program as per following details
// Create one base class MEDICINE with following data members
// Category- (i.e. stimulants, inhalants, cannabinoids)
// Date_of_manufacture, Company name
// Create one sub class TABLET derived from MEDICINE with following data members
// Tablet name, Price
// Create one sub class PainReliever derived from TABLET with data member
// Dosage_units: i.e( 1 or 2 or 3)
// Side_effects : i.e (Nausea, Drowsiness, Dizziness.) Use_within_days: i.e(10 or
// 20 or 30).

// Use appropriate member function for setting and Getting above details and display
// details in main function.

#include <iostream>
using namespace std;

class Medicine{
    protected:
    string category;
    string date_of_manufacture;
    string company_name;

    public:
    void set_details(){
        cout<<"Enter category: ";
        cin>>category;
        cout<<"Enter date of manufacturing: ";
        cin>>date_of_manufacture;
        cout<<"Enter company name: ";
        cin>>company_name;
    }

    void display(){
        cout<<"\n\n-----------------------------------------------------\n";
        cout<<"Category: "<<category<<endl;
        cout<<"Date of manufacturing: "<<date_of_manufacture<<endl;
        cout<<"Company name: "<<company_name<<endl;
        }
    
    ~Medicine(){};
};

class Tablet:public Medicine{
    protected:
    string tablet_name;
    int price;

    public:

    void set_details(){
        Medicine::set_details();
        cout<<"Enter tablet name: ";
        cin>>tablet_name;
        cout<<"Enter price: ";
        cin>>price;
    }
    
    void display(){
        Medicine::display();
        cout<<"Tablet Name: "<< tablet_name<<endl;
        cout<<"Price: "<<price<<endl;
    }

};

class PainReliever:public Tablet{
    private:
    int dosage;
    string side_effect;
    int use_within;

    public:

    void set_details(){
        Tablet::set_details();
        cout<<"Enter dosages: ";
        cin>>dosage;
        cout<<"Enter side effect: ";
        cin>>side_effect;
        cout<<"Enter use within: ";
        cin>>use_within;
    }

    void display(){
        Tablet::display();
        cout<<"Dosage: "<<dosage<<endl;
        cout<<"Side Effect: "<<side_effect<<endl;
        cout<<"Use Within: "<<use_within<<endl;
    }
};


int main() {

    PainReliever p;
    p.set_details();
    p.display();
    

    return 0;
}

