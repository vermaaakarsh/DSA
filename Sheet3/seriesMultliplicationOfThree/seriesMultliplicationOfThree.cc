#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1,b=2;
    if(n==1)
        cout<<a;
    else if(n==2)
        cout<<a<<" "<<b;
    else{
        cout<<a<<" "<<b<<" ";
        for(int i=3;i<=n;i++){
            if(i%2==0){
                b*=3;
                cout<<b<<" ";
            }
            else{
                a*=3;
                cout<<a<<" ";
            }
        }
    }
    return 0;
}