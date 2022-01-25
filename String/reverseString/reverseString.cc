#include<iostream>
using namespace std;
string reverse(string str){
    for(int i=0;i<str.length()/2;i++){
        char ch=str.at(i);
        str[i]=str[str.length()-1-i];
        str[str.length()-1-i]=ch;
    }
    return str;
}
int main(){
    string str;
    getline(cin,str);
    cout<<reverse(str);
    return 0;
}