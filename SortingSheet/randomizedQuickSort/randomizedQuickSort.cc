#include<iostream>
using namespace std;
int partition(int arr[],int l,int u){
    int randInd=l+rand()%(u-l);
    arr[u]+=arr[randInd];
    arr[randInd]=arr[u]-arr[randInd];
    arr[u]-=arr[randInd];
    int pivot=arr[u], i=l-1,j=l,temp;
    while(j<u){
        if(arr[j]<pivot){
            temp=arr[j];
            arr[j]=arr[++i];
            arr[i]=temp;
        }
        j++;
    }
    temp=arr[++i];
    arr[i]=arr[u];
    arr[u]=temp;
    return i;
}
void quickSort(int arr[],int l,int u){
    if(l>=u)
        return;
    int pivot=partition(arr,l,u);
    quickSort(arr,l,pivot-1);
    quickSort(arr,pivot+1,u);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}