#include<iostream>
#include<math.h>
using namespace std;
void series(int n){
    if(n==1){
        cout<<"1^1 ";
        return ;
    }
    series(n-1);
    cout<<"+ "<<n<<"^"<<n<<" ";
}
int main(){
    int n;//number of terms
    cin>>n;
    series(n);
    return 0;
}