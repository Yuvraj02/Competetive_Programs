#include <iostream>

using namespace std;

int largestElement(int [], int);
int smallestElement(int [], int);

int main(){

    int arr[] = {3,7,4,2,6,9,8};

    int length = sizeof(arr)/sizeof(int);

    cout<<largestElement(arr,length)<<endl;
    cout<<smallestElement(arr,length);


    return 0;
}

int largestElement(int arr[], int n){

    int largestElement = arr[0];

    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] > largestElement)
        {
            largestElement = arr[i];
        }
    }
    return largestElement;
}

int smallestElement(int arr[], int n){
    int smallestElement = arr[0];
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i]<smallestElement)
        {
            smallestElement = arr[i];
        }
    }
    
    return smallestElement;
}