#include<iostream>
#include<cstring>
using namespace std;

class CWH {
    protected :
        string title;
        float rating ;
    public :
        CWH(string c , float t){
             title = c;
             rating = t;
        }
        virtual void Display()=0;// do nothing function --> Pure Virtual Function
};

class CWHVideo : public CWH {
    float video_length;
    public :
        CWHVideo(string s , float t , float vl) : CWH(s,t){
            video_length = vl;
        }
        void Display(){
            cout<<"This is amazing video with title : "<<title<<endl;
            cout<<"Ratings : "<<rating<<" out of 5 stars \n";
            cout<<"Length of this video is : "<<video_length<<" minutes \n";
        }
};

class CWHText : public CWH {
    int words;
    public :
        CWHText(string s , float t , int wd) : CWH(s,t){
            words = wd;
        }
        void Display(){
            cout<<"This is amazing text tutorial  with title : "<<title<<endl;
            cout<<"Ratings of this text tutorial is : "<<rating<<" out of 5 stars \n";
            cout<<"No. of words in this text tutorial is : "<<words<<" words \n";
        }
};
                    
int main(){
    string title ;
    float rating,vlen;
    int words;

    //For Code With Harry Video
    title = "Django";
    vlen = 18.46;
    rating = 4.86;
    CWHVideo djvideo(title,rating,vlen);
    //  djvideo.Display();

    //For Code With Harry Text
    title = "Django Tutorial Text";
    words = 356;
    rating = 4.86;
    CWHText djtext(title,rating,words); 
    // djtext.Display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->Display();
    tuts[1]->Display();
            
    return 0;
}