#include <iostream>
using namespace std;

void Merge(int arr[],int l,int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a1[n1];
    int a2[n2];
    for(int i=0;i<n1;i++){
        a1[i]=arr[l+i];
    }
      for(int i=0;i<n1;i++){
        a2[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1&&j<n2){
        if(a1[i]<a2[j]){
            arr[k]=a1[i];
            i++;k++;
        }
        else{
            arr[k]=a2[j];
            j++;k++;
        }
    }


    while(i<n1){
        arr[k]=a1[i];
        k++;i++;

    }
    while(j<n2){
        arr[k]=a2[j];
        k++;j++;
    }
}




void MergeSort(int arr[],int l,int r){
if(l<r){
    int mid=(l+r)/2;
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1,r);
    Merge(arr,l,mid,r);

}
}

int main(){
    int arr[]={8,9,3,1,0,5,2,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=0;
    int r=n-1;
    MergeSort(arr,l,r);
    cout<<"sorted array is:"<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}