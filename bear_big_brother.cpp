#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int bear,brother;

    cin>>bear>>brother;
    if(bear==brother) cout<<1;
    else{
        int count=0;
        while(bear<=brother){
            bear*=3;
            brother*=2;
            count++;
        }
        cout<<count;
    }
    return 0;
}