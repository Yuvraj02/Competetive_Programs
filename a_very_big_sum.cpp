#include <iostream>
#include <vector>

using namespace std;

int main(){

    long long sum = 0;
    vector<long> arr = {1000000001,1000000002,1000000003,1000000004,1000000005};

 
    for (auto i : arr)
    {
        sum += i;
    }
    
    cout<<sum;
      
    return 0;
}