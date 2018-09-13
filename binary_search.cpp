#include <iostream>
using namespace std;

void merge(long int arr[],long int start, long int mid,long int end){
    int p = start, q = mid+1;
    int temp[end-start+1];
    int k = 0;
    
    for (int i = start; i<=end;i++){
        if(p>mid){
            temp[k++] = arr[q++];
        }
        else if(q>end){
            temp[k++] = arr[p++];
        }
        else if(arr[p]<arr[q]){
            temp[k++] = arr[p++];
        }
        else{
            temp[k++] =arr[q++];
        }
    }
    for(int i =0; i<k;i++){
        arr[start++] = temp[i];
    }
}    
    
void merge_sort(long int arr[],long int start,long int end){
    
    if(start<end){
    int mid = (start+end)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    
    merge(arr,start,mid,end);
    }
    
}    
int binary_search(long int arr[],long int low,long int high, long int x){
    
    while(low<=high){
        long int mid = (low + high)/2;
        if(arr[mid]>x){
            high = mid-1;
        }
        else if(arr[mid]<x){
            low = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main(){
    
    int n;
    cin>>n;
    long int arr[n];
    for(int p=0;p<n;p++){
        cin>>arr[p];
    }
    int q;
    cin>>q;
    int x;
    for(int j=0;j<q;j++){
        cin>>x;
        merge_sort(arr,0,n-1);
        cout<<binary_search(arr,0,n-1,x)+1<<endl;
    }
}
