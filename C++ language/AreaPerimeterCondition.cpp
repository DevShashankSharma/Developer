#include<iostream>
using namespace std;

int main(){
    int length=5;
    int breadth=7;

    //Area & Perimeter of Rectangle
    cout<<"Area of Rectangle : "<<length*breadth<<endl;
    cout<<"Perimeter of Rectangle : "<<2*(length+breadth)<<endl;


    //Area and Perimeter of Circle
    int radius;

    cin>>radius;
    cout<<"Area of Circle : "<<3.14*radius*radius<<endl;
    cout<<"Perimeter of Circle : "<<2*3.14*radius<<endl;

    //Checking No. are equal or  not
    int x,y;
    
    cin>>x>>y;
    cout<<(x==y)<<endl;
    cout<<(x<50&&x<y)<<endl;
    cout<<(x<50||x<y)<<endl;

    //Interchanging value
    int temp;

    temp=x;
    x=y;
    y=temp;

    cout<<x<<endl<<y<<endl;

    return 0;
}