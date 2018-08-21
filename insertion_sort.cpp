
# include <iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    
    for (int i=0;i<n;i++){
        int j= i;
        int temp = arr[i];
        while(j>0 && arr[j-1]>temp){
            arr[j]=arr[j-1];
            j=j-1;
                        
        }
        arr[j] = temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int p=0;p<n;p++){
        cin>>arr[p];
    }
    insertion_sort(arr,n);
    for(int p=0;p<n;p++){
        cout<<arr[p]<<" ";
    }
    
}
