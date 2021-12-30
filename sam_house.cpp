#include <iostream>
#include <vector>
using namespace std;

int main(){

    int s,t,a,b,m,n,count_of_apples = 0,count_of_oranges = 0,single_apple,single_orange;
    vector<int> apples,oranges;

    cin>>s>>t>>a>>b>>m>>n;
    
    for (size_t i = 0; i < m; i++)
    {
        cin>>single_apple;
        apples.push_back(single_apple);
    }
    
    for (size_t i = 0; i < n; i++)
    {
        cin>>single_orange;
        oranges.push_back(single_orange);
    }
    
    //For Apples
    for (size_t i = 0; i < m; i++)
    {
        apples[i] += a;
    }

    //For Oranges
    for (size_t i = 0; i < n; i++)
    {
        oranges[i] += b;
    }
    
    for (auto i : apples)
    {
        if (i >= s && i <=t)
        {
            count_of_apples++;
        }
        
    }

    for (auto i : oranges)
    {
        if (i >= s && i <=t)
        {
            count_of_oranges++;
        }
    }
    
         cout<<count_of_apples<<endl;
         cout<<count_of_oranges;  

    return 0;
}