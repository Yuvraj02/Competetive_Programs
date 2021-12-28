#include <iostream>

using namespace std;

int main(){

    cout<<"How many Integers in an Array? : "<<endl;

    for (size_t i = 0; i < 6; i++)
    {
    cout<<rand()%100 + 1<<endl;    
    }
    

    return 0;
}