#include <iostream>

using namespace std;

int main(){

        int n = 6;
        
        int white_space_count = n;
        
        for (size_t i = 0; i < n; i++)
        {
            
            
             for (size_t k = 2; k <= white_space_count; k++)
                {
                    cout<<" ";
                }
            
             for (size_t j = 0; j <= i; j++)
                {
                    cout<<"#";
                }
    
            white_space_count--;
         cout<<"\n";   
        }

    return 0;
}
