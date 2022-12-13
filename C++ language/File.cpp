#include<iostream>
#include<fstream>
using namespace std;
                    
int main(){
    // // ofstream hout("Sample.txt");     //anything can be written at place of hout

    // //conecting our file with st stream
    // ofstream st("Sample.txt");
    // string s;

    // //Created a name string and filling it with the string variable entered by user
    // cout<<"Enter your name \n";
    // cin>>s;

    // //Writing a string to the file
    // st<<"My name is "<<s<<" Sharma\n";   
    // st.close();

    ifstream sin("Sample.txt");
    string content;
    getline(sin,content);

    cout <<"The content of this text file is : "<<content<<endl;
    sin.close();
    
    return 0;
}