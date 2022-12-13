#include<iostream>
#include<string>
using namespace std;

class student {
    private :
        int password ;
        char fav_character;

    public :
        string name;
        int roll_no;
        void setdata(int passw , char ch);
        void getdata(){
             cout<<"Name of Student : "<<name<<endl;
             cout<<"roll_no of Student : "<<roll_no<<endl;
             cout<<"password of Student : "<<password<<endl;
             cout<<"fav_character of Student : "<<fav_character<<endl;
        }
};

void student :: setdata(int passw , char ch){
    password = passw ;
    fav_character = ch ;
}
                       
int main(){
    student s1 ;
    // OR
    s1.name = "Shashank Sharma";
    s1.roll_no = 1234;

    // s1.password=111; cannot be access due to private

    s1.setdata(1111 , 'F');

    s1.getdata();

    return 0;
}