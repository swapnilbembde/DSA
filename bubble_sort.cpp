
//using c++14(g++ 5.4.0)
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
  
  for (int p=0;p<n;p++){
        cin>>arr[p];
    }
    int temp;
    int count=0;
    for (int i=0;i<n-1;i++){
        for (int k=0;k<n-i-1;k++){
            if (arr[k]>arr[k+1]){
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1]=temp;
                count++;
            }
        }
    }
    cout<<count;
}
