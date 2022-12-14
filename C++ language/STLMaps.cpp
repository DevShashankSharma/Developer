#include<iostream>
#include<string>
#include<map>
using namespace std;

//Map is an associative array 
int main(){
    map<string,int> marksmap;
    marksmap["Shashank"] = 98;
    marksmap["Ritika"] = 93; 
    marksmap["Roopnarayan"] = 99;

    marksmap.insert({{"Rohan" , 90} , {"Junky",47}});

    map<string,int> :: iterator iter;
    for(iter = marksmap.begin() ; iter != marksmap.end() ; iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    cout<<"The size is : "<<marksmap.size()<<endl;
    cout<<"The max size is : "<<marksmap.max_size()<<endl;
    cout<<"The empty's return value is : "<<marksmap.empty()<<endl;
    return 0;
}