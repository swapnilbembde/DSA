#include <bits/stdc++.h>

using namespace std;
int main(){
int t;
int sum;

cin>> t;
for(int j=0;j<t;j++){
    int n,count;
    int cap;
    cin>>n>>cap;
    int arr[n];
    for(int itr=0;itr<n;++itr){
        cin>>arr[itr];
    }
    sort(arr,arr+n);
    count =0;
    sum = 0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        if(sum>cap){
            break;
        }
        count++;
    }
    
    cout<<count<<"\n";

}
}
