#include <iostream>

using namespace std;

int main(){

    int t;
    
    cin>>t;
    
    while (t--)
    {
    int onecounter=0,zerocounter=0,n;
    cin>>n;
    string str;
    cin>>str; 

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]=='0')
        {
            zerocounter++;
        } if (str[i] == '1')
        {
            onecounter++;
        }
        if(zerocounter<onecounter)
        {
            cout<<"no";
            break;
        }
    }

    if (onecounter == zerocounter)
    {
        cout<<"yes";
    }else{
        cout<<"no";
    }
    
    }
}