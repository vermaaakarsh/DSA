#include<iostream>
using namespace std;
int main(){
    int n;//number of lines
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>1;j--){
            cout<<" ";
        }
        cout<<char(65+n-i);
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        if(i!=n)
            cout<<char(65+n-i);
        cout<<endl;
    }
    return 0;
}