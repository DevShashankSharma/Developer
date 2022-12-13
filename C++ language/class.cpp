#include <iostream>
#include <string>
using namespace std;

class Vechile
{
    float milege;
    float price;

public:
    void setInfo(float m , float p){
        milege = m;
        price =p;
    } 
    void getInfo()
    {
        cout << "Milege is : " << milege << endl;
        cout << "Price of vechile is : " << price << endl;
    }
};

class Car : public Vechile
{
    int warranty;
    int seating_capacity;
    float ownership_cost;

public:
    void setdata(int w, int s, float o)
    {
        warranty = w;
        seating_capacity = s;
        ownership_cost = o;
    }
    void getdata()
    {
        cout << "Warranty : " << warranty << endl;
        cout << "Seating capacity : " << seating_capacity << endl;
        cout << "Ownership Cost : " << ownership_cost << endl;
    }
};

class Audi : public Car
{
    string model_type;

public:
    void setdataA(string m)
    {
        model_type = m;
    }
    void getdataA() 
    {
        cout << "Car name : Audi"<< endl;
        cout << "model type : " << model_type << endl;
        getInfo();
        getdata();
    }
};

class Ford : public Car
{
    string model_type;

public:
    void setdataF(string m)
    {
        model_type = m;
    }
    void getdataA() 
    {
        cout << "Car name : Ford"<< endl;
        cout << "model type : " << model_type << endl;
        getInfo();
        getdata();
    }
};

class Bike : public Vechile
{
    int gear_no;
    float fuel_tank_size;
    string wheel_type;
    string cooling_type;
    int cc_no;

public:
    void setBikeInfo(int g, float f, string w, string c, int cc)
    {
        gear_no = g;
        fuel_tank_size = f;
        wheel_type = w;
        cooling_type = c;
        cc_no = cc;
    }
    void getBikeInfo()
    {
        cout << "No. of gear : " << gear_no << endl;
        cout << "Fuel tank size : " << fuel_tank_size << endl;
        cout << "Wheel type : " << wheel_type << endl;
        cout << "Cooling type : " << cc_no << endl;
    }
};

class Bajaj : public Bike
{
    string make_type;

public:
    void setdataB(string m)
    {
        make_type = m;
    }
    void getdataB()
    {
        cout << "Bike name : Bajaj"<< endl;
        cout << "Make type : " << make_type << endl;
        getInfo();
        getBikeInfo();
    }
};

class TVS : public Bike
{
    string make_type;

public:
    void setdataT(string m)
    {
        make_type = m;
    }
    void getdataT()
    {
        cout << "Bike name : TVS"<< endl;
        cout << "Make type : " << make_type << endl;
        getInfo();
        getBikeInfo();
    }
};

int main()
{
    Audi a;
    a.setInfo(450,245999.67);
    a.setdata(1,6,311000.76);
    a.setdataA("20-B");

    a.getdataA();
    
    return 0;
}