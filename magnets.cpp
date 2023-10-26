#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    string prev,next;
    cin>>n;
    cin>>prev;
    int count =1;
    while(n!=1){
        cin>>next;
        if(prev != next){
            count++;
        } 
        prev = next;
        n--;
    }
    cout<<count;

    

    return 0;
} // namespace std;
