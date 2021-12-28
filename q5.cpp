#include <iostream>

using namespace std;

void findLargestElement(int [], int);
void findSmallestElement(int [], int);

int main(){

int n;

cout<<"Enter the length of the array : ";

cin>>n;

int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

// cout<<"Current Element are : \n";

findLargestElement(arr,n);
findSmallestElement(arr,n);

// for (auto i : arr)
// {
//     cout<<i;
// }

return 0;
}

void findLargestElement(int arr[], int n){

    int largestElement = arr[0];

    for (size_t i = 0; i < n; i++)
    {
       if (arr[i] > largestElement)
       {
           largestElement = arr[i];
       }
    }

     cout<<"Largest Element is : "<<largestElement<<endl;

}

void findSmallestElement(int arr[], int n){
    int smallestElement = arr[0];

    for (size_t i = 0; i < n; i++)
    {
       if (arr[i] < smallestElement)
       {
           smallestElement = arr[i];
       }
    }
    cout<<"Smallest Element is : "<<smallestElement<<endl;

}