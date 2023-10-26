#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s1;
    cin>>s1;
    int upper=0;
    int lower=0;
    for(char it:s1){
        if(it>=65 && it<=90) upper++;
        else lower++;
    }
    if(upper>lower){
        for(auto &it:s1){
            if(!(it>=65 && it<=90))
                it-=32;
        }
    }
    else{
        for(auto &it:s1){
            if(it>=65 && it<=90)
                it+=32;
        }
    }
    for(auto it:s1){
        cout<<it;
    }
    
    return 0;
} // namespace std;
