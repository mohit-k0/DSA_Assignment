#include<iostream>
using namespace std;
bool leap(int y){
    if(y%4==0 && (y%100!=0 || y%400==0)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cout<<"Enter number of days: "<<endl;
    cin>>n;
    int y=0,m=0,d=n;
    while(d>=365){
        y++;
        d=d-365;
        if(leap(y)){
            d--;
        }
    }
    int i=0;
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    while(d>=month[i]){
        i++;
        d=d-month[i];
        m++;
        if(leap(y) && m==2){
            d--;
        }
    }
    cout<<"Year-"<<y<<endl;
    cout<<"Month-"<<m<<endl;
    cout<<"Day-"<<d<<endl;
    if(leap(y)){
        cout<<"Its a leap year"<<endl;
    }
    else{
        cout<<"Its not a leap year"<<endl;
    }

}