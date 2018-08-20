
# include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
    int min;
    for (int i =0;i<n-1;i++){
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
    int arr1[n];
    int sum = 0;
    int out = 0;
    for (int p=0;p<n;p++){
        cin>>arr1[p];
        
    }
    int k;
    cin>>k;
    int arr2[k];
  
    for (int p=0;p<k;p++){
        cin>>arr2[p];
        sum+=arr2[p];
    }
    if(sum>=n){
        selection_sort(arr1,n);
        selection_sort(arr2,k);
        for(int i =n-1; i>n-k-1;i--){
            out+=arr1[i];
           
        }
        
        cout<<out;}
    else{
        cout<<"-1";
    }    
    
    
}
