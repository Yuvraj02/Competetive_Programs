#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr,int length,int x);

int main(){
    vector<int> arr = {};
    int num = 0,n;
    cin>>n;
    string result="NO";

    for (size_t i = 1; num < n-1; i++)
    {
        num = (i*(i+1))/2;
        arr.push_back(num);
    }
    int got_index;
    for (int i = arr.size()-1; i >=0; i--)
    {
        int key = n-arr[i];
        got_index = binarySearch(arr,arr.size(),key);

        if (got_index != -1)
        {
            result = "\nYES";
            break;
        }
    }
    cout<<result;
    return 0;
}

int binarySearch(vector<int> arr,int length,int x){
    int high = length-1,low = 0,mid = (low+high)/2;
    while (low<high)
    {
        if (x == arr[mid]) return mid;
        if (x < arr[mid]) high = mid-1;
        if (x > arr[mid]) low = mid+1;
        mid = (mid+high)/2;  
    }
    return -1;
}






  
