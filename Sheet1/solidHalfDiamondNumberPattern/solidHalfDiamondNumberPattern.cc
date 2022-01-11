#include<iostream>
using namespace std;
int main(){
    int n,i;//number of lines
    cin>>n;
    for(i=n/2;i>=0;i--){
        for(int j=(n+1)/2-1;j>=i;j--){
            cout<<j;
        }
        cout<<endl;
    }

    for(i=1;i<=n/2;i++){
        for(int j=(n+1)/2-1;j>=i;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}