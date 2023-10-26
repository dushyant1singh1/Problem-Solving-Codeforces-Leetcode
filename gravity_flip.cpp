#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    vector<int>arr;

    while(n!=0){
        int p;
        cin>>p;
        arr.push_back(p);
        n--;
    }
    sort(arr.begin(),arr.end());
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
} // namespace std;
