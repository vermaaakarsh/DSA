#include<iostream>
using namespace std;
int main(){
    int n;//number of lines
    cin>>n;
    for(int i=1;i<=(n+1)/2;i++){
        for(int j=1;j<=i;j++){
            if(j==1||j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        for(int j=i;j<(n+1)/2;j++){
            if(i==1)
                cout<<"*";
            else
                cout<<" ";
        }
        for(int j=i+1;j<(n+1)/2;j++){
            if(i==1)
                cout<<"*";
            else
                cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(i==(n+1)/2&&j==1)
                continue;
            else if(j==1||j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for(int i=(n+1)/2-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(j==1||j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        for(int j=i;j<(n+1)/2;j++){
            if(i==1)
                cout<<"*";
            else
                cout<<" ";
        }
        for(int j=i+1;j<(n+1)/2;j++){
            if(i==1)
                cout<<"*";
            else
                cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1||j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}