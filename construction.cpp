#include <iostream>

using namespace std;

class Area{


};

class Perimeter {
 
};

class Rectangle : private Area, private Perimeter{

    public:

     void get_data(){
         
     }

    void area_calc(){

    }

    void peri_calc(){

    }

};

int main(){
    double length,breadth,c;
    cin>>length>>breadth;
    Rectangle r;
    r.get_data();
    r.area_calc();
    r.peri_calc();
    cout<<length*breadth<<endl;
    cout<<2*(length+breadth);

    return 0;
}