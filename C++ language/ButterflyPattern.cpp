#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

     for(int i=1;i<=n;i++){
         int space=(2*n)-(2*i);
         for(int j=0;j<i;j++){
            cout<<"* ";
         }
         for(int j=1;j<=space;j++){
            cout<<"  ";
         }
          for(int j=0;j<i;j++){
            cout<<"* ";
         }
         cout<<endl;
    }

     for(int i=n;i>=1;i--){
         int space=(2*n)-(2*i);
         for(int j=0;j<i;j++){
            cout<<"* ";
         }
         for(int j=1;j<=space;j++){
            cout<<"  ";
         }
          for(int j=0;j<i;j++){
            cout<<"* ";
         }
        cout<<endl;
    }
    return 0;
}
 // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(j<=i){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     for(int j=n-1;j>=0;j--){
    //         if(j<=i){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for(int i=n-1;i>=0;i--){
    //     for(int j=0;j<n;j++){
    //         if(j<=i){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     for(int j=n-1;j>=0;j--){
    //         if(j<=i){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

//For Book
//  for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(j<=i){
//                 cout<<"* ";
//             }else{
//                 cout<<"  ";
//             }
//         }
//         for(int j=n-1;j>=0;j--){
//             if(j<=i){
//                 cout<<"* ";
//             }else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//      for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(j>=i){
//                 cout<<"* ";
//             }else{
//                 cout<<"  ";
//             }
//         }
//         for(int j=n-1;j>=0;j--){
//             if(j>=i){
//                 cout<<"* ";
//             }else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }