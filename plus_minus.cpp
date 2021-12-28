#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

    vector<int> arr = {-4,3,-9,0,4,1};
    double positive_count = 0.0,negative_count = 0.0,zero_count=0.0;

    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i]==0)
        {
            zero_count++;
        }else if(arr[i] < 0){
            negative_count++;
        }else{
            positive_count++;
        }
        
    }

    cout<<positive_count/arr.size()<<setprecision(6)<<endl;
    cout<<negative_count/arr.size()<<endl;
    cout<<zero_count/arr.size()<<endl;


    return 0;
}