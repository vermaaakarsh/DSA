#include<iostream>
#include<vector>
using namespace std;
int sumOfHexaDigits(int n){
    if(n==0)
        return 0;
    return (n%16) +sumOfHexaDigits(n/16);
}
int gcd(int n1,int n2){
    for(int i=2;i<=((n1>n2)?n2:n1);i++){
        if(n1%i==0 && n2%i==0)
            return i;
    }
    return 1;
}
void findIntegers(int l,int r){
    int sumOfDigits=0,count=0;
    for(int i=l;i<=r;i++){
        sumOfDigits=sumOfHexaDigits(i);
        if(gcd(sumOfDigits,i)>1){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<"\nTotal number of integers: "<<count;
}
int main(){
    int l,r;
    cin>>l>>r;
    findIntegers(l,r);
    return 0;
}