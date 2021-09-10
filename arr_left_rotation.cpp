#include <iostream>
#include <vector>

using namespace std;

vector<int> rotLeft(vector<int>, int);

int main(){

vector<int> a;

//rotLeft(a,4);

     int length,frequencyOfRotations;

    cin>>length>>frequencyOfRotations;

    for (int i = 0; i < length; i++)
    {
        int num;
        cin>>num;
        a.push_back(num);
    }

    for(auto i : rotLeft(a,4)){
    cout<<i;
}
    
    return 0;
}

vector<int> rotLeft(vector<int> a, int d) {
//d is the number of left rotations
    while (d--)
    {
        for (int i = 0; i < a.size(); i++)
    {
        if (i==a.size()-1)
        {
            break;
        }
        
        int temp = a[i];
        a[i]= a[i+1];
        a[i+1] = temp;

    }
}
 
return a;
}
