#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
                    
int main(){
    string str=  "amdkfmrxzKSKFRmxMMMmJ";
    
    for(int i=0 ; i<str.size() ; i++){
       if(str[i] >= 'a' && str[i <= 'z']){
           str[i] -=  32;
       }
    //    if(int(str[i])>97){
    //        str[i] = char(int(str[i])-32);
    //    }
    }
    cout<<str<<endl;
            
    return 0;
}