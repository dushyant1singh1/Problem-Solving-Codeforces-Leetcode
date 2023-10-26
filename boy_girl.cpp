#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s1;
    cin>>s1;
    unordered_map<char,int>m;int count=0;
    for(int i=0;i<s1.length();i++){
        if(m.find(s1[i])==m.end()){
            m[s1[i]]=1;
            count++;
        }
    }
    if(!(count&1)) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
} // namespace std;
