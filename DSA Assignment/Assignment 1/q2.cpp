#include<iostream>
using namespace std;
int generateFibonacci(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return generateFibonacci(n-1)+generateFibonacci(n-2);
    }

}
int main(){
    int n;
    cout<<"Enter the term which you want: "<<endl;
    cin>>n;
    if(n>0){
        cout<<generateFibonacci(n);
        return 0;
    }
    else{
        cout<<"Wrong input"<<endl;
        return 0;
    }
}