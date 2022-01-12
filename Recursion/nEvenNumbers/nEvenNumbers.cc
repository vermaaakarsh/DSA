#include<iostream>
using namespace std;
void evenNo(int n){
    if(n==0)
        return;
    evenNo(n-2);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    evenNo(2*n);
    return 0;
}