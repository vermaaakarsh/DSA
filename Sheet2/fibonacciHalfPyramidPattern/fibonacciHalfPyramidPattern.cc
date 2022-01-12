#include<iostream>
using namespace std;
int main(){
    int n;//number of lines
    cin>>n;
    int a=0,b=1,c=a+b;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<c;
            if(j!=i)
                cout<<" ";
            a=b;
            b=c;
            if(i!=1)
                c=a+b;            
        }
        cout<<endl;
    }
    return 0;
}