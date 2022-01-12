#include<iostream>
using namespace std;
int main(){
    int n,i;//number of lines
    cin>>n;
    for(i=1;i<=(n+1)/2;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i;j<(n+1)/2;j++){
            cout<<" ";
        }
        for(int j=i+1;j<(n+1)/2;j++){
            cout<<" ";
        }
        for(int j=n-i+1;j<=n;j++){
            if(j!=(n+1)/2)
                cout<<j;
        }
        cout<<endl;
    }
    for(i-=2;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i;j<(n+1)/2;j++){
            cout<<" ";
        }
        for(int j=i+1;j<(n+1)/2;j++){
            cout<<" ";
        }
        for(int j=n-i+1;j<=n;j++){
            if(j!=(n+1)/2)
                cout<<j;
        }
        cout<<endl;
    }
    return 0;
}