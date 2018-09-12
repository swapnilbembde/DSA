#include<iostream>

using namespace std;

long int partition(long int arr[],long int start,long int end){
    long int piv = arr[start];
    long int i = start +1;
    for (long int j=start+1;j<=end;j++){
        if(arr[j]<piv){
            swap(arr[i],arr[j]);
            i++;
        }    
    }
    swap(arr[start],arr[i-1]);
    return i-1;
}

long int random_part(long int arr[],long int start, long int end){
    long int random = start + rand()%(end-start +1);
    swap(arr[start],arr[random]);
    return partition(arr,start,end);

void quick_sort(long int arr[],long int start,long int end){
    if(start<end){
        long int piv_pos = partition(arr,start,end);
        quick_sort(arr,start,piv_pos-1);
        quick_sort(arr,piv_pos+1,end);
    }

}    

int main()
{
    long int n;
    cin>>n;
    long int arr[n];
    for (long int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start = 0;
    long int end =n-1;
    quick_sort(arr,start,end);
    for( long int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
}
