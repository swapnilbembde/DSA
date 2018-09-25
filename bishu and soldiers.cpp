#include <iostream>
using namespace std;

void merge(int arr[],int start, int mid,int end){
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
    
void merge_sort( int arr[], int start, int end){
    
    if(start<end){
    int mid = (start+end)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    
    merge(arr,start,mid,end);
    }
    
}    
int binary_search( int arr[], int low, int high,  int x){
    
    while(low<=high){
         int mid = (low + high)/2;
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
    int arr1[n],arr[n+1];
    for (int p =0;p<n;p++){
        cin>>arr1[p];
    }
    merge_sort(arr1,0,n-1);
    int q,x,pos,sum,num;
    cin>>q;
    for(int i=0;i<q;i++){
        for (int temp=0;temp<n;temp++){
            arr[temp] = arr1[temp];
        }
        cin>>x;
        arr[n]=x;
        sum=0;
        merge_sort(arr,0,n);
        pos = binary_search(arr,0,n,x);
        for(int j=0;j<n+1;j++){
            
            if (arr[pos]<arr[j]){
                break;
            }
            sum+=arr[j];
            num =j;
        
        }
        cout<<num<<" "<<sum-arr[pos]<<endl;
    }
}
