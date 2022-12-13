#include<iostream>
using namespace std;

class employe {
    int id;
    static int count; //default initialize by 0

    public : 
       void setdata(void){
           cout<<"Enter ID of employe \n";
           cin>>id;
           count++;
       }
       void getdata(void){
           cout<<"The ID of employe "<<count<<" is : "<<id<<endl;
       }
       //static member function can only access static variable or static function
       //they have no need of data they run by class only
       static void getcount(void){
           // cout<<id;  // throws error
           cout<<"The value of count is : "<<count<<endl;
       }
};

int employe :: count; //static data variable is share by all
// if i want to start count by 1000 then we have to do int employe :: count=100;
                    
int main(){
    employe Shashank,Ritika,Babli;

    Shashank.setdata();
    Shashank.getdata();
    employe :: getcount();  // :: --> scope resolution
    
    Ritika.setdata();
    Ritika.getdata();
    employe :: getcount(); 

    Babli.setdata();
    Babli.getdata();
    employe :: getcount();  

    return 0;
}