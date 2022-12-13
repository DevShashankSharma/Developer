#include<iostream>
using namespace std; 


int main(){

char c;

int sum=0;

int i=1;

int prod=1,avg;

while(c != 'q'){

int n;

cout<<"Enter the input : ";

cin>>n;

sum +=n; avg = sum /i;

i++;

prod *= n;

cout<<"Enter the q to quit and continue c :";

cin>>c;

if(c=='q'){ break; }

}  

cout<<"Average is : "<<avg<<endl;

cout<<"Product is : "<<prod<<endl;

return 0;

}