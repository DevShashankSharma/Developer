#include<iostream>
using namespace std;

class Shop {
    int id;
    float price;
    public : 
    void setdata(int a ,float b){
        id = a;
        price = b;
    }
    void getdata(void){
        cout<<"Code of this item is : "<<id<<endl;
        cout<<"Price of this item is : "<<price<<endl;
    }
};
                    
int main(){
    int size = 3;
    //1. general store item
    //2. veggies item
    //3. hardware item

    Shop *ptr = new Shop [size]; 
    Shop *ptrtemp = ptr; 
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter id and price of item "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setdata(p,q);
        ptr->setdata(p,q);
        ptr++;
    }

    /*
     1 2 3
         ^
         |
         |
         ptr
    */

    for (int i = 0; i < size; i++)
    {
        cout<<"Item number : "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    
        
    return 0;
}