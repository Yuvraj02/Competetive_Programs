#include <iostream>
#include <vector>

using namespace std;

int main(){

vector<vector<int>> arr =  {{1,1,1,0,0,0},
                            {0,1,0,0,0,0},
                            {1,1,1,0,0,0},
                            {0,0,2,4,4,0},
                            {0,0,0,2,0,0},
                            {0,0,1,2,4,0}};

vector<int> elements_of_sub;

//vector<int> prototype_sum;

// prototype_sum.push_back(two_sum[0]);

// cout<<prototype_sum[0];

// prototype_sum = two_sum;

// for (auto i : prototype_sum)
// {
//     cout<<i;
// }

int total_sum, biggest_sum;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            
        //   elements_of_sub.push_back(arr[i][j]);
        if (i<4 && j<4)
        {
            total_sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
             elements_of_sub.push_back(total_sum);
        //total_sum = 0;
        }
        
        //elements_of_sub.push_back(total_sum);
       
        }
        
    }

// for (auto i : elements_of_sub)
// {
//     cout<<i<<endl;
// }
    biggest_sum = elements_of_sub[0];
for (int i = 0; i < elements_of_sub.size(); i++)
{
    if (elements_of_sub[i] > biggest_sum){
        biggest_sum = elements_of_sub[i];
    }
}
    cout<<biggest_sum;

    return 0;
}