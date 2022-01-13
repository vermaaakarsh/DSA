#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1)
        cout<<0;
    else if(n==2)
        cout<<0<<","<<1;
    else{
        int a=0,b=1,c=a+b;
        cout<<0<<","<<1<<",";
        for(int i=3;i<=n;i++){
            cout<<c;
            if(i!=n)
                cout<<",";
            a=b;
            b=c;
            c=a+b;
        }
    }
    return 0;
}