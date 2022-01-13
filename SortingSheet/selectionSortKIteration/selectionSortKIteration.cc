#include<iostream>
using namespace std;
void selectionSort(int arr[],int n,int k){
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
        if(i==k-1){
            cout<<"Array after "<<k<<" iterations: ";
            for(int l=0;l<n;l++)
                cout<<arr[l]<<" ";
            cout<<endl;
        }
    }
}
int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;
    selectionSort(arr,n,k);
    cout<<"Array after sorting: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}