#include<iostream>
using namespace std;
void isAnagram(string str1,string str2){
    if(str1.length()!=str2.length()){
        cout<<"Not Anagram!"<<endl;
        return;
    }
    int count[256]={0};
    for(int i=0;i<str1.length();i++)
        count[str1.at(i)]++;
    for(int i=0;i<str2.length();i++)
        count[str2.at(i)]--;
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            cout<<"Not Anagram!"<<endl;
            return;
        }
    }
    cout<<"Anagram"<<endl;
}
int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;
    isAnagram(str1,str2);
    return 0;
}