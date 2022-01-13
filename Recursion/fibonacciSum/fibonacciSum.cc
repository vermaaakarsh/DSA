#include<iostream>
using namespace std;
static int sum=0;
void fibo(int n){
    static int a=0,b=1,c;
    if(n>0){
        c=a+b;
        a=b;
        b=c;
        sum+=c;
        fibo(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    if(n>2){
        fibo(n-2);
        cout<<sum+1;
    }
    else if(n==1)
        cout<<0;
    else if(n==2)
        cout<<1;
    return 0;
}