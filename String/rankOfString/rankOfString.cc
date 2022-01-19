#include<iostream>
using namespace std;
int fact(int n){
    if(n==0||n==1)
        return 1;
    return n*fact(n-1);
}
void rankOf(string str){
    int count[256]={0},len=str.length(),rank=1;
    int mul=fact(len);
    for(int i=0;i<len;i++)
        count[str.at(i)]++;
    for(int i=1;i<256;i++)
        count[i]+=count[i-1];
    for(int i=0;i<len;i++){
        mul=mul/(len-i);
        rank+=count[str.at(i)-1]*mul;
        for(int j=str.at(i);j<256;j++)
            count[j]--;
    }
    cout<<rank;
}
int main(){
    string str;
    cin>>str;
    rankOf(str);
    return 0;
}