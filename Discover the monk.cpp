#include<iostream>
using namespace std;

void merge(long int arr[],int start,int end, int mid){
    int p = start;
    int q = mid+1;
    long int temp[end-start+1];
    int k =0;
    while( p<=mid && q<=end ){
        if(arr[p]<=arr[q])
            temp[k++] = arr[p++];
        else
            temp[k++]=arr[q++];
    }
    
    while(p<=mid){
        temp[k++]=arr[p++];
    }
    while(q<=end){
        temp[k++] = arr[q++];
    }
    for(int j =0;j<k;j++){
        arr[start++] = temp[j];
    }
}

void merge_sort(long int arr[],int start,int end){
    
    if(start<end){
    int mid = (start + end)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,end,mid);
    }
    
}

string binary_search(long int arr[],int start, int end,long int key){
    while(start<=end){
        int mid = (start+end)/2;
        
        if(key<arr[mid]){
            end = mid-1;
        }
        else if(key>arr[mid]){
                start = mid + 1;
        }
        else
            return "YES";
        
    }
    return "NO";
}
int main(){
    int n,q;
    cin>>n>>q;
    long int arr[n];
    long int x;
    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
  
    while(q--){
        cin>>x;
        cout<<binary_search(arr,0,n-1,x)<<endl;
    }
        
}

\\ Alternate solution using vector and in built sort and search works in c++ as well as in c++14
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    //cin>>n>>q;
    scanf("%d %d\n",&n,&q);
    //cout<<n<<endl;
    vector <int> arr;
    int temp;
    for (int i = 0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    int x;
    for(auto i =arr.begin();i!=arr.end();++i){
        cout<<*i<<" ";
    }

    while(q--){
        scanf("%d",&x);
        if(binary_search(arr.begin(),arr.end(),x))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
        
}
