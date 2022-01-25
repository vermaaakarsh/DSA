#include<iostream>
using namespace std;
int countWords(string str){
    int count=0,i=0;
    while(i<str.length()){
        if(str.at(i)==' '||str.at(i)=='\t'||str.at(i)=='\n')
            count++;
        i++;
    }
    count++;
    return count;
}
int main(){
    string str;
    getline(cin,str);
    cout<<countWords(str);
    return 0;
}