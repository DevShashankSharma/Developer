#include<iostream>
using namespace std;

int main(){
    char ch;

    cin>>ch;

    char UppercaseVowel=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    char LowercaseVowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');

    if(UppercaseVowel||LowercaseVowel){
        cout<<"Vowel\n";
    }else{
        cout<<"Consonant\n";
    }
    
    return 0;
}