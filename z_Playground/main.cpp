#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define dbg(x) cout<<#x<<" "<<x<<endl;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;

void solve() {
    string x;
    cin>>x;
    for(int i=0; i<x.size(); i++) {
        if(i!=0 || x[i]!='9')
            x[i]=min(x[i]-'0',9-(x[i]-'0'))+'0';
        dbg(x[i]);
    }
    cout<<x<<endl;
}

int main() {
    fastio;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}