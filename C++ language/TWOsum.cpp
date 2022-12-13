#include<iostream>
 using namespace std;

 int main(){
     int n;              //n refers to no. of elements in array
     cin>>n;

     int arr[n];
     //taking elements of array by user
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     
     int target;
     cin>>target;
     for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){
             if((arr[i]+arr[j])==target){
                 cout<<i<<" , "<<j<<endl;
             }
         }
     }
     return 0;
 }