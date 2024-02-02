#include<iostream>
#include <cmath>
using namespace std;
void calculateVolume(float r, float h){
    cout<<"Volume of given cylinder is: "<<M_PI*pow(r,2)*h<<endl;
}
void calculateSurfaceArea(float r,float h){
    cout<<"Surface Area of given cylinder is: "<<(2*M_PI*r)*(r+h)<<endl;
}
int main(){
    float r,h;
    cout<<"Enter radius of cylinder: "<<endl;
    cin>>r;
    cout<<"Enter height of cylinder: "<<endl;
    cin>>h;
    if(r>0 && h>0){
        calculateVolume(r,h);
        calculateSurfaceArea(r,h);
        return 0;
    }
    else{
        cout<<"Wrong input"<<endl;
        return 0;
    }
}