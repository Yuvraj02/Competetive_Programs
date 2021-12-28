#include <iostream>

using namespace std;

int main(){

    int t,counter=0;
    double width,height;

    cin>>t;

    while (t--)
    {
        cin>>width>>height;
        // cout<<width/height;
        if(width/height>=1.6 && width/height<=1.7){
            
            counter++;

        }else if(height/width >=1.6 && height/width<=1.7){
            counter++;
        }   
     
    }
    cout<<counter;


    return 0;
}
