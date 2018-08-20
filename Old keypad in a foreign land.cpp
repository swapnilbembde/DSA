
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
        int keys = n/k;
        int len=0;
        for(int t=1;t<keys+2;t++){
        //cout<<"top"<<len<<endl;    
            for(int i =n-(t-1)*(k-len)-1; i>max(n-t*(k-len)-1,-1);i--){
                out = out + t*arr1[i];
            }
            
            //int len=0;
            len =0;
            for(int j=0;j<k;j++){
                arr2[j]-=1;
                if(arr2[j]<=0){
                    len++;
                }
            }
        //cout<<len<<endl;
        }
        cout<<out;
            
    }
    else{
        cout<<"-1";
    }    
    
    
}
