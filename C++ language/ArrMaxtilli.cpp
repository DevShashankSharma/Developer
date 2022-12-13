#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j;
    cout<<"last digit\n";
    cin>>j;

    int max=arr[0];
    for(int i=0;i<j;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}