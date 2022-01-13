#include<iostream>
#include<math.h>
using namespace std;
int fact(int n){
    if(n==0)
        return 1;
    int f=1;
    for(int i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main(){
    int n,x;//number of terms and value of x
    cin>>n>>x;
    float sum=1;
    for(int i=2,j=2;j<=n;i+=2,j++){
        if(j%2==0){
            sum-=pow(x,i)/fact(i);
        }
        else{
            sum+=pow(x,i)/fact(i);
        }
    }
    cout<<sum;
    return 0;
}