#include<iostream>
using namespace std;
void findAnagram(string txt,string ptr){
    int countPtr[256]={0},flag=1;
    for(int i=0;i<ptr.length();i++)
        countPtr[ptr.at(i)]++;
    for(int i=0;i<txt.length()-ptr.length();i++){
        int countTxt[256]={0};
        for(int j=i;j<ptr.length()+i;j++)
            countTxt[txt.at(j)]++;
        for(int j=0;j<256;j++){
            if(countTxt[j]!=countPtr[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<i;
            return;
        }
        flag=1;
    }
    cout<<"";   
}
int main(){
    string txt,ptr;
    cin>>txt;
    cin>>ptr;
    findAnagram(txt,ptr);
    return 0;
}