#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        //int votes=0;
        int p,q,r;
        cin>>p>>q>>r;
        if((p+q+r)>=2){
            count++;
        }
        n--;
    }
    cout<<count;
    return 0;
} // namespace std;
