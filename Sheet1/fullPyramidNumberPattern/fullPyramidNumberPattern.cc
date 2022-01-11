#include<iostream>
using namespace std;
int main(){
    int n;//number of lines
    cin>>n;
    n=n*2;
    for(int i=1;i<=n;i+=2){
        for(int j=0;j<n-i-1;j+=2){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}