#include<iostream>
#include<string>
using namespace std;
string preProcess(string str){
    string newStr="";
    for(int i=0;i<str.length();i++){
        char ch=tolower(str.at(i));
        if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
            newStr+=ch;
        }
    }
    return newStr;  
}
bool isPalin(string str){
    string temp=str;
    for(int i=0;i<str.length()/2;i++){
        char ch=str.at(i);
        str[i]=str[str.length()-1-i];
        str[str.length()-1-i]=ch;
    }
    if(temp==str)
        return true;
    else
        return false;
}
bool validPalin(string str){
    str=preProcess(str);
    if(isPalin(str))
        return true;
    else
        return false;
}
int main(){
    string str;
    getline(cin,str);
    cout<<(validPalin(str)?"true":"false");
    return 0;
}