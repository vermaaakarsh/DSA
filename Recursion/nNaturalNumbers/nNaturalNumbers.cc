#include<iostream>
using namespace std;
void naturalNo(int n){
    if(n==0)
        return;
    naturalNo(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    naturalNo(n);
    return 0;
}