#include<iostream>
using namespace std;
int main(){
    int n,i;//number of lines
    cin>>n;
    for(i=1;i<=(n+1)/2;i++){
        for(int j=i;j>1;j--){
            cout<<" ";
        }
        cout<<i;
        for(int j=(n+1)/2;j>i;j--){
            cout<<" ";
        }
        for(int j=(n+1)/2;j>i+1;j--){
            cout<<" ";
        }
        if(i!=(n+1)/2)
            cout<<i;
        cout<<endl;
    }
    for(int k=n/2;k>=1;k--){
        for(int j=k;j>1;j--){
            cout<<" ";
        }
        cout<<i;
        for(int j=(n+1)/2;j>k;j--){
            cout<<" ";
        }
        for(int j=(n+1)/2;j>k+1;j--){
            cout<<" ";
        }
        cout<<i++;
        cout<<endl;
    }
    return 0;
}