#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> arr = {5,5,5,5,5};

    int min = arr[0], max = arr[0],max_val=0,min_val=0;

    for (size_t i = 0; i < arr.size(); i++)
    {   
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }

      for (size_t i = 1; i < arr.size(); i++)
    {   
        if (arr[i] > max)
        {
            max = arr[i];
        }

    }

    if (min == max)
    {
        for (size_t i = 0; i < arr.size(); i++)
        {
            min_val += arr[i];
            max_val += arr[i];
        }
        
    }else{
            
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] != max)
        {
            min_val += arr[i];
        }
        
    }

    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] != min)
        {
            max_val += arr[i];
        }
        
    }
    }

       cout<<min_val<<" "<<max_val;

    return 0;
}