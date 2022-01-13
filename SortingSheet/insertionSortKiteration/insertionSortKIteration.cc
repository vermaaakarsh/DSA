#include<iostream>
using namespace std;
void insertionSort(int arr[],int n,int k){
    int key,j;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    insertionSort(arr,n,k);
    cout<<"Array after sorting: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}