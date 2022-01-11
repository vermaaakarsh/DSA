#include<iostream>
using namespace std;
int main(){
    int n,i;//number of lines
    cin>>n;
    for(i=0;i<(n+1)/2;i++){
        for(int j=0;j<(n+1)/2-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=n-i-1;i>=0;i--){
        for(int j=0;j<(n+1)/2-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}