#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min=arr[i],mInd=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                mInd=j;
            }
        }
        if(mInd!=i){
            arr[mInd]+=arr[i];
            arr[i]=arr[mInd]-arr[i];
            arr[mInd]-=arr[i];
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}