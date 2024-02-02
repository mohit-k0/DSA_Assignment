#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: "<<endl;
    cin>>str;
    int n=str.length();
    cout<<"Length of string is: "<<n<<endl;
    string rev_str;
    for(int i=0;i<n;i++){
        rev_str=rev_str+str[n-i-1];
    }
    for(int i=0;i<n;i++){
        if(str[i]!=rev_str[i]){
            cout<<"Not a palindrome";
            return 0;
        }
    }
    cout<<"It is a palindrome"<<endl;
    return 0;
}