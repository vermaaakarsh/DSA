#include<iostream>
#include<algorithm>
using namespace std;
void maxOccuringChar(string str){
    int count[256]={0};
    for(int i=0;i<str.length();i++){
        count[str.at(i)]++;
    }
    cout<<(char)(max_element(count,count+256)-count);
}
int main(){
    string str;
    getline(cin,str);
    maxOccuringChar(str);
}