#include<iostream>
using namespace std;
int main(){
    int n,i=1,l=1;//number of lines
    cin>>n;
    for(i=(n+1)/2;i>=1;i--){
        for(int j=i;j>1;j--){
            cout<<" ";
        }
        cout<<l;
        for(int j=(n+1)/2;j>i;j--){
            cout<<" ";
        }
        for(int j=(n+1)/2;j>i+1;j--){
            cout<<" ";
        }
        if(i!=(n+1)/2)
            cout<<l;
        cout<<endl;
        l++;
    }
    l-=2;
    for(i=2;i<=(n+1)/2;i++){
        for(int j=i;j>1;j--){
            cout<<" ";
        }
        cout<<l;
        for(int j=(n+1)/2;j>i;j--){
            cout<<" ";
        }
        for(int j=(n+1)/2;j>i+1;j--){
            cout<<" ";
        }
        if(i!=(n+1)/2)
            cout<<l--;
        cout<<endl;
    }
    return 0;
}