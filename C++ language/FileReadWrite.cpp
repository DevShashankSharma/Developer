#include<iostream>
#include<fstream>
/*
The useful classes for working with file in c++ are :-
1.fstreambase
2.ifstream --> derived from fstreambase
3.ofstream --> derived from fstreambase
*/
// In oder to work with files in c++  , you will have to open it , there are two ways to open a file
//      1. Using the Constructor
//      2. Using the member function open() of the class
using namespace std;
                    
int main(){
    string st1 = "Shashank Sharma";
    string st2;
    // // Opening file using constructor and writing it
    // ofstream out("Sample.txt");
    // out<<st1;

    //Opening file using constructor and reading it 
    ifstream in("Sample.txt");
    // in>>st1;
    // cout<<st1;
    getline(in,st2);
    cout<<st2;

    return 0;
}