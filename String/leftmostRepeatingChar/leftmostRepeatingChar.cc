#include<iostream>
using namespace std;
void repeatingChar(string str){
    int count[256]={0};
    for(int i=0;i<str.length();i++)
        count[str.at(i)]++;
    for(int i=0;i<str.length();i++){
        if(count[str.at(i)]>1){
            cout<<str.at(i);
            return;
        }
    }
    cout<<"";
}
int main(){
    string str;
    cin>>str;
    repeatingChar(str);
    return 0;
}