#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pd=arr[1]-arr[0];
    int temp=2;
    int ans=2;

    for(int i=2;i<n;i++){
        if(pd==(arr[i]-arr[i-1])){
            temp++;
        }else{
            temp=2;
        }
        pd=arr[i]-arr[i-1];
        ans=max(ans,temp);
    }
    cout<<ans<<endl;
    return 0;
}