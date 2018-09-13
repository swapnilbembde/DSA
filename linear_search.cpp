#include <iostream>
using namespace std;

int linear(long int arr[],long int m,int n){
    int index =-1;
    for(int i =0;i<n;i++){
        if(m==arr[i]){
            index = i+1;
        }
    }
    return index;
    
}

int main(){
    int n;
    cin>>n;
    long int m;
    cin>> m;
    long int arr[n];
    for (int p=0;p<n;p++){
        cin>>arr[p];
    }
    cout<<linear(arr,m,n);
    
}
