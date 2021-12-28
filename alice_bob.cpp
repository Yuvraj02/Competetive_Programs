#include <iostream>

using namespace std;

int main(){

    int a[] = {17,28,30};
    int b[] = {99,16,8};
    int c[]={0,0};

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            c[0]++;
        } else if (a[i] < b[i]){
            c[1]++;
        }
        
    }

    for (auto i : c)
    {
        cout<<i<<" ";
    }
    
    

return 0;
}