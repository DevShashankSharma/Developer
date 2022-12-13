//Matrix must be Sorted row wise and column wise
#include<iostream>
using namespace std;

int main(){
    int r,c;

    cin>>r>>c;

    int arr[r][c];
    for(int i=0 ; i<r ; i++){
        for(int j=0; j<c ; j++){
            cin>>arr[i][j];
        }
    }

    int target;

    cout<<"Enter target\n";
    cin>>target;

    int i = 0 , j = c-1;
    
    while(i<r and j>=0){
        if(arr[i][j] == target){
           cout<<"Element found\n";
            return 0;
        }
        else if(arr[i][j]<target){
            i++;
        }
        else{
            j--;
        }
    }
    
    cout<<"Element not found\n";

    return 0;
}