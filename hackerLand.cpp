//  grade = 84  round to  (85 - 84 is less than 3)
//  grade = 29 do not round (result is less than 40)
//  grade = 57 do not round (60 - 57 is 3 or higher)

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> grades = {73,67,38,33};
    vector<int> rounded__off_vec;

    int difference,remainder,round_off_value;

    for (size_t i = 0; i < grades.size(); i++)
    {
    remainder = grades[i]%5;
    difference = grades[i]-(grades[i]-remainder);
    round_off_value = grades[i];

    if (grades[i] >= 38)
    {
         if ( difference > 0)
    {
        if ((5 - difference ) < 3)
            round_off_value = (5-difference)+grades[i];
        }
    }

    rounded__off_vec.push_back(round_off_value);

 }
    
    for (auto i : rounded__off_vec)
    {
        cout<<i<<endl;
    }

    return 0;
}