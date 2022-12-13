#include<iostream>
#include<fstream>
using namespace std;
                    
int main(){
    ofstream out;
    out.open("Sample.txt");
    out<<"this is myself\n"<<"My name is Shashank Sharma\n";
    out.close();

    ifstream in;
    in.open("Exampleclasses.cpp");
    string s,s1;
    // in>>s>>s1;
    // cout<<s<<" "<<s1;

    while (in.eof() == 0){
        getline(in,s);
        cout<<s<<endl;
    }
    in.close();

    return 0;
}