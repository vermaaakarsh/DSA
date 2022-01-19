#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid,int u){
    int left[mid-l+1],right[u-mid],i,k,j;
    for(i=0;i<mid-l+1;i++)
        left[i]=arr[i+l];
    for(j=0;j<u-mid;j++)
        right[j]=arr[mid+1+j];
    k=0;j=0;i=l;
    while(j<mid-l+1 && k<u-mid){
        if(left[j]<=right[k])
            arr[i++]=left[j++];
        else
            arr[i++]=right[k++];
    }
    while(j<mid-l+1){
        arr[i++]=left[j++];
    }
    while(k<u-mid){
        arr[i++]=right[k++];
    }
}
void mergeSort(int arr[],int l,int u){
    if(l>=u)
        return;
    int mid=l+(u-l)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,u);
    merge(arr,l,mid,u);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}