#include <iostream>

using namespace std;

bool lcm(int,int,int,int);



int main(){

    int x1,v1,x2,v2,k1_rate = x1+v1,k2_rate=x2+v2;

   cin>>x1>>v1>>x2>>v2; 
    
    if (v1>v2 || lcm(x1,v1,x2,v2);)
    {
     while (k1_rate != k2_rate)
        {
        k1_rate += v1;
        k2_rate += v2;
        }
        cout<<"YES";
    }else{
        cout<<"NO";
    }    
    
    return 0;
}

bool lcm(int num1,int deno_1,int num2,int deno_2){

    int result,num1_cal,num2_calc;

    if(num1 == 0 )
        return (num2%deno_2 ) == 0;

    if (num2 ==0)
    return (num1%deno_1)==0;

    if (deno_1==deno_2)
    {
     return ((num1+num2)%deno_1) == 0;

    } else if (deno_1%deno_2 == 0)
    {
        return ((num1 + (num2 * (deno_1/deno_2 * 1.0)))/deno_1) == 0;
    
    }else if(deno_2%deno_1 == 0){
        return ((num2 + (num1 * (deno_2/deno_1 * 1.0)))/deno_2) == 0;
    }
    else { return 0;}
}
