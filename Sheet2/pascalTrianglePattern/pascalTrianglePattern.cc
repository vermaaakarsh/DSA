#include<iostream>
using namespace std;
int fact(int n){
    if(n==1||n==0)
        return 1;
    return n*fact(n-1);
}
int main(){
    int n;//number of lines
    cin>>n;
    cout<<1<<endl;//fact(0)/(fact(0-0)*fact(0))
    for(int i=1;i<n;i++){
        cout<<1<<" ";//fact(i)/(fact(i-i)*fact(i))
        for(int j=1;j<=i;j++){
            cout<<fact(i)/(fact(i-j)*fact(j));
            if(j!=i)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}