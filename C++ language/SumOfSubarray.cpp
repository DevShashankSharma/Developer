#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of Array\n";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of Array\n";
    for(int i=0;i<n;i++){
        cout<<"arr"<<i<<" : ";
        cin>>arr[i];
    }
      int temp=0;
    for(int i=0;i<n;i++){ 
       
        for(int j=i;j<n;j++){
          
            temp += arr[j];
            cout<<temp<<endl;
        }
        
    }
    

    return 0;
}