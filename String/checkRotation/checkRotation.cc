#include<iostream>
using namespace std;
void checkRotation(string str1,string str2){
    str1=str1+str1;
    if(str1.find(str2)!=string::npos)
        cout<<"Yes, the second string is rotation of the first string.";
    else
        cout<<"No, the second string is not rotation of the first string.";
}
int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;
    checkRotation(str1,str2);
    return 0;
}