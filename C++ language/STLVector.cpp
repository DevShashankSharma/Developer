#include<iostream>
#include<vector>
using namespace std;

template<class T>
void Display(vector<T> &v){
    cout<<"Displaying this vector\n";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout<<endl;
}
                    
int main(){
    // vector<int> v1; // zero length vector
    // Display(v1);
    // int element,size;
    // cout<<"Enter size of vector : ";
    // cin>>size;
    // for(int i= 0;i<size;i++){
    //     cout<<"Enter the element to add to this vector : ";
    //     cin>>element;
    //     v1.push_back(element);
    // } 

    // Display(v1);

    // v1.pop_back(); // remove last element of vector
    // Display(v1);

    // vector<int> :: iterator iter = v1.begin();
    // // v1.insert(iter,34);
    // // v1.insert(iter+1,45);
    // v1.insert(iter+1,5,33); // insert 5 copy 
    //     Display(v1);




    // vector<int> v2(4); // 4 - element integer vector
    // v2.push_back(5);
    // Display(v2);




    // vector<char> v2c(4); // 4 - element character vector
    // v2c.push_back('c');
    // Display(v2c);




    // vector<char> v3(v2c); // 4 - element character vector vector from v2
    // Display(v3);



    

    vector<int> v4(3,6);
    Display(v4);

    
    return 0;
}