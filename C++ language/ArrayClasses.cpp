#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrize[100];
    int counter;

    public :
        void initCounter(void){
            counter = 0;
        }
        void setPrize(void);
        void displayPrize(void);
};

void shop :: setPrize(void){
    cout<<"Enter ID of item "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Prize of item "<<counter+1<<endl;
    cin>>itemPrize[counter];
    counter++;
}

void shop :: displayPrize(void){
    for(int i=0;i<counter ; i++){
        cout<<"The Prize of Item "<<itemId[i]<<" is : "<<itemPrize[i]<<endl;
    }
}
                    
int main(){
    shop Dukkan;
    Dukkan.initCounter();
    Dukkan.setPrize();        
    Dukkan.setPrize();        
    Dukkan.setPrize();
    Dukkan.displayPrize();        
    return 0;
}