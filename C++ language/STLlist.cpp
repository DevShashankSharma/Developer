#include<iostream>
#include<list>

using namespace std;

void Display(list<int> &l){
    list<int> :: iterator it;
    for(it = l.begin() ; it != l.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;  //list of 0 length
    list1.push_back(5);     
    list1.push_back(33);     
    list1.push_back(1);     
    list1.push_back(14);     
    list1.push_back(55);  

    Display(list1);
    // Removing elements from the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(1);

    //Sorting the list
    // list1.sort();

    //Reversing list
    list1.reverse();
    Display(list1);

    list<int> list2(3);   //empty list of size 3
    list<int> :: iterator itr;
    itr = list2.begin();
    *itr = 56 ;
    itr++;
    *itr = 3 ;
    itr++;
    *itr = 76 ;
    itr++;
    Display(list2);

   //merge of list
   list1.merge(list2);
   cout<<"List1 after merging : ";
   Display(list1); 

    return 0;
}