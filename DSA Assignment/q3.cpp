#include<iostream>
using namespace std;
void calculateArea(float l,float b){
    cout<<"Area of given rectangle is: "<<l*b<<endl;
}
void calculatePerimeter(float l,float b){
    cout<<"Perimeter of given rectangle is: "<<2*(l+b)<<endl;
}
int main(){
    float l,b;
    cout<<"Enter the length of rectangle: "<<endl;
    cin>>l;
    cout<<"Enter the breadth of rectangle: "<<endl;
    cin>>b;
    if(l>0 && b>0){
        calculateArea(l,b);
        calculatePerimeter(l,b);
        return 0;
    }
    else{
        cout<<"Wrong input"<<endl;
        return 0;
    }
}