#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n,int k){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                arr[j]+=arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]-=arr[j+1];
            }
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
    bubbleSort(arr,n,k);
    cout<<"Array after sorting: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}