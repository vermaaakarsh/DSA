#include<iostream>
using namespace std;
void merge(int ar1[],int ar2[],int m,int n,int arr[]){
    int i=0,k=0,j=0;
    while(j<m && k<n){
        if(ar1[j]<=ar2[k])
            arr[i++]=ar1[j++];
        else
            arr[i++]=ar2[k++];
    }
    while(j<m){
        arr[i++]=ar1[j++];
    }
    while(k<n){
        arr[i++]=ar2[k++];
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int ar1[m],ar2[n],arr[m+n];
    for(int i=0;i<m;i++)
        cin>>ar1[i];
    for(int i=0;i<n;i++)
        cin>>ar2[i];
    merge(ar1,ar2,m,n,arr);
    for(int i=0;i<m+n;i++)
        cout<<arr[i]<<" ";
    return 0;
}