#include<iostream>
#include<vector>;
#include<string>;
using namespace std;
void split(string sentence){
    vector<string> v;
    string temp;
    for (char charc : sentence){
        if (charc==' '){
            v.push_back(temp);
            // v.push_back(" ");
            temp="";
        }
        else{
            temp=temp+charc;
        }

    }
    v.push_back(temp);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}
int main(){
    split("mohit is good");

}