#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
                    
int main(){
    //FUNCTION OBJECT OR 'FUNCTORS' :- Function wrapped in a class so that it is available like an object   

    int arr[] = {89,56,222,456,1,2,4};
    // sort(arr,arr + 5);//sort upto 5th element
    sort(arr,arr+7);
    for(int i=0 ; i<7; i++){
        cout<<arr[i]<<endl;
    }
    sort(arr,arr+7,greater<int>());//sort in decending order     
    for(int i=0 ; i<7; i++){
        cout<<arr[i]<<endl;
    }     
    return 0;
}