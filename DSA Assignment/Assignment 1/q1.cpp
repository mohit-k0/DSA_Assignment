#include<iostream>
using namespace std;
void hcf(int a,int b){
    if(b!=0 && a%b>0){
        int r;
        r=a%b;
        a=b;
        b=r;
        hcf(a,b);
    }
    else{
        cout<<"GCD of these 2 numbers is: "<<b<<endl;
    }

}
int main(){
    int a,b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    if(a>0 && b>0){
        hcf(a,b);
        return 0;
    }
    else{
        cout<<"Wrong input"<<endl;
        return 0;
    }
}