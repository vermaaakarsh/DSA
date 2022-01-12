#include<iostream>
using namespace std;
void naturalNo(int n){
    if(n==0)
        return;
    cout<<n<<" ";
    naturalNo(n-1);
    
}
int main(){
    int n;
    cin>>n;
    naturalNo(n);
    return 0;
}