#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

   
    int no_of_test_cases {0};
    cin>>no_of_test_cases;
    
    int n,m,k;
    

    for (int i = 0; i < no_of_test_cases; i++)
    {
        cin>>n>>m>>k;
        int arr[k];
        int temp[k] = {0};
        int count{0};
    
        for (int j = 0; j < k; j++)
        {
            cin>>arr[j];
        }

        if (k<=1)
        {
            cout<<0;
        }else{
            for (int l = 0; l < k; l++)
                {
                for (int s = l+1; s < k ; s++)
                    {
                        if (arr[l] == arr[s] && arr[l] != n+m)
                            {
                                temp[count]=arr[s];
                                count++;
                                break;   
                            }
                    }
            
                }

        }
        int n = sizeof(temp) / sizeof(temp[0]);
        sort(temp,temp+n);
        
        for (auto i : temp)
        {
            if (i != 0)
            {
                cout<<i<<" ";
            }
        
        }
    }
    

    return 0;
}
// Test Cases : 2 5 2 5 2 4 10 10 10 10