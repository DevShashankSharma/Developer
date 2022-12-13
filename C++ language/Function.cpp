 #include<iostream>
 using namespace std;

 void sum(int a , int b){
    cout<<"Sum : "<<a+b<<endl;
 }

 int product(int a , int b){
    return a*b;
 }

 void circle(int r){
    cout<<"Area : "<<3.14*r*r<<endl;
    cout<<"Perimeter : "<<2*3.14*r<<endl;
 }

 int main(){
    int a,b,r;
    cin>>a>>b>>r;

    sum(a,b);
    cout<<"Product : "<<product(a,b)<<endl;
    circle(r);

    return 0;
 }