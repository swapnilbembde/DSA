#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    if(s.length()!=1){
    if(s[0]=='?')
    {if(s[1]=='b' || s[1]=='?')
            s[0]='a';
    else
            s[0]='b';
    }
    for(int i=1;i<s.length();i++){
        
        if (s[i]=='?'&&s[i-1]=='b'&&(s[i+1]=='b' || i==(s.length()-1)))
            s[i] = 'a';
        if (s[i]=='?'&&s[i-1]=='a')
            s[i] ='b';
        if (s[i]=='?'&&s[i-1]=='b'&&s[i+1]=='a')
            s[i] ='b';
        if (s[i]=='?'&&s[i-1]=='b'&&s[i+1]=='?')
            s[i] = 'a';
            
        
    }
    }
    else{
        if(s[0]=='?')
        s[0]='a';
    }
    cout<<s;
}
