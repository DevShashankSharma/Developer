#include<iostream>
using namespace std;

int main(){
    float x,y;
    int z=5;
    double w=6.2;

    cout<<"Add of Int and Double Value is : "<<z+w<<endl;

    cin>>x>>y;
    
    float sum=x+y,product=x*y;
    cout<<"Sum : "<<sum<<endl;
    cout<<"Product : "<<product<<endl;

    //sum product using their value

    cout<<"sum : "<<sum+product<<endl;
    cout<<"product : "<<sum*product<<endl;

    //Area of Rectangle
    float l,b;
    cout<<"Enter length\n";
    cin>>l;
    cout<<"Enter breadth\n";
    cin>>b;

    cout<<"Area of Rectangle : "<<l*b<<endl;
    cout<<"Area of Rectangle : "<<int(l*b)<<endl;

    return 0;
}