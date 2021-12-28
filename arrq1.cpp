#include <iostream>

using namespace std;


int linearSearch(int arr[], int length,int x){

for (int i = 0; i < length; i++)
{
    if(arr[i] == x){
        return i;
    }
}
return -1;
}

int main(){

    int arr[] = {4,2,1,3,5};
    int length = sizeof(arr)/sizeof(int);
  
    cout<<linearSearch(arr,length,2);
 
    return 0;
}
