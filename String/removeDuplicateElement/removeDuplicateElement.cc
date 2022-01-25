#include<iostream>
#include<string>
using namespace std;
string removeDuplicate(string str){
    int count[256]={0};
    for(int i=0;i<str.length();i++)
        count[str.at(i)]++;
    for(int i=0;i<str.length();i++){
        if(count[str.at(i)]==1 || str.at(i)==' '){
            continue;
        }
        else if(count[str.at(i)]>1){
            count[str.at(i)]=-1;
        }
        else{
            str.erase(i,1);
        }
    }
    return str;
}
int main(){
    string str;
    getline(cin,str);
    cout<<removeDuplicate(str);
    return 0;
}