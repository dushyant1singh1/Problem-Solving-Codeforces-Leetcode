
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout); 
    #endif
    int n;
    cin>>n;
    string s;
    cin>>s;
    int g=0;
//   cout<<s;
    for(int i=0;i<n;i++){
        if(s[i]=='A') g++;
        else g--;
    }
    if(g>0) cout<<"Anton";
    else if(g<0) cout<<"Danik";
    else cout<<"Friendship";
  //  cout<<g;
}