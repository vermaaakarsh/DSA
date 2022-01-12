#include<iostream>
using namespace std;
void OddNo(int n){
    if(n<=0)
        return;
    OddNo(n-2);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    OddNo(2*n-1);
    return 0;
}