#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int twoSums(vector<int> &vec1, int target){

    unordered_set<int> set;
    for (int i = 0; i < vec1.size(); i++)
    {
        if (set.find(vec1[i]) != set.end())
        {
            cout<<"Found"<<endl;
            return i;
        }
            set.insert(target-vec1[i]);
    }
    cout<<"Not returning"<<endl;
    return 0;
}

int main(){
    vector<int> vec1 = {4,1,2,3};
    int target = 7;

    cout<<twoSums(vec1, target);    
    
    return 0;
}

