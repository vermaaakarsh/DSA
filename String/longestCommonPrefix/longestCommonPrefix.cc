#include<iostream>
#include<vector>
using namespace std;
string lcp(vector<string> v,int n){
    string res="";int i,j;
    for(i=0;i<v[0].length();i++){
        for(j=0;j<n-1;j++){
            if(v[j].at(i)!=v[j+1].at(i))
                break;
        }
        if(j==n-1)
            res+=v[0].at(i);
        else
            break;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<string> vrr(n);
    for(int i=0;i<n;i++){
        cin>>vrr[i];
    }
    cout<<lcp(vrr,n);
    return 0;
}