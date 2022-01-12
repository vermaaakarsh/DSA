#include<iostream>
using namespace std;
bool isPrime(int n){
    int f=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
            f++;
    }
    if(f==1)
        return true;
    else
        return false;
}
void nPrime(int n){
    if(n==0)
        return;
    nPrime(n-1);
    if(isPrime(n))
        cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    nPrime(n);
    return 0;
}