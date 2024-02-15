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
    int y=1;
    while(true) {
        if((1&y)>0 && (1^y)>0) {
            break;
        }
        y++;
    }
    cout<<y<<endl;
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