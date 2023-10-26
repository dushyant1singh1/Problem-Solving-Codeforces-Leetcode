#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int i=0;
    int j=0;
    for(int k=1;k<=5;k++){
        for(int l =1;l<=5;l++){
            int val;
            cin>>val;
            if(val==1){
                i=k;
                j=l;
            }
        }
    }
    cout<<(abs(3-i)+abs(3-j));
    return 0;
} // namespace std;
