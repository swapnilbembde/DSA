#include <iostream>
using namespace std;
void(bubble_sort(float v[],int n)){
    float temp;
    for (int i=0;i<n-1;i++){
        for (int k=0;k<n-i-1;k++){
            if (v[k]>v[k+1]){
                temp = v[k];
                v[k] = v[k+1];
                v[k+1]=temp;
            }
        }
    }
}    

int main(){
    int n;
    cin>>n;
    float vac[n],people[n];
    for (int p =0;p<n;p++){
        cin>>vac[p];
    }
    bubble_sort(vac,n);
    for (int p =0;p<n;p++){
        cin>>people[p];
    }
    bubble_sort(people,n);
    int count =0;
    for (int k=0;k<n;k++){
        if (vac[k]>people[k])
            count++;
        }
    if (count ==n)
        cout<<"Yes";
    else
        cout<<"No";
    
    }
    
