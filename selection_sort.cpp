\\ x is number of steps 

# include <iostream>
using namespace std;

void selection_sort(int arr[], int n,int x){
    int min;
    for (int i =0;i<x;i++){
        min = i;
        for (int k =i+1;k<n;k++){
            if (arr[min]>arr[k]){
                min = k;
            }
        }  
        swap(arr[min],arr[i]);
        
        
    }
}

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
  
    for (int p=0;p<n;p++){
        cin>>arr[p];
    }
    selection_sort(arr,n,x);
    for (int p=0;p<n;p++){
        cout<<arr[p]<<" ";
    }
}
