#include<iostream>
using namespace std;
string reverseWordsOrder(string str){
    string revStr="",w="";
    int i=0,previ=0;
    while(i<=str.length()){
        if(i!=str.length()&& str.at(i)!=' '){
            w+=str.at(i);
        }
        else{
            revStr=w+" "+revStr;
            w="";
        }
        i++;
    }
    return revStr;
}
int main(){
    string str;
    getline(cin,str);
    cout<<reverseWordsOrder(str);
    return 0;
}