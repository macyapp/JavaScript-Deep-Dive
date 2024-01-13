#include<iostream>
#include<vector>
using namespace std;

void initialize(vector<int>& a) {
    for(auto& el: a)
        cin>>el;
}

void print(vector<int> a) {
    for(const auto& x: a)   
        cout<<x<<' ';
    cout<<"\n";
}

void solve(vector<int>& a, int n) {
    int i,j;
    bool swapped;
    for(i=0;i<n-1;i++) {
        swapped=false;
        for(j=0;j<n-1-i;j++) {      // Since Largest element is always sorted in a single pass
            if(a[j]>a[j+1]) {
                swapped=true;
                swap(a[j],a[j+1]);
            }
        }
        if(!swapped)
            break;
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    initialize(a);
    print(a);
    solve(a,n);
    print(a);
    return 0;
}