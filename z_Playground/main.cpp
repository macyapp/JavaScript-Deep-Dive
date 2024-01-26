#include<iostream>
#include<vector>
using namespace std;

void init(vector<int>& a) {
    for(auto& x: a)
        cin>>x;
}

void print(vector<int>& a) {
    for(const auto& x: a)
        cout<<x<<" ";
    cout<<endl;
}

int partition(vector<int>& a, int low, int high) {
    int pivot=a[low];
    int start=low-1, end=high+1;
    while(true) {
        do {
            start++;
        } while(a[start]<pivot);
        do {
            end--;
        } while(a[end]>pivot);
        if(start>=end)
            return end;
        swap(a[start],a[end]);
    }
}

// Overloaded function
int partition(int a[], int low, int high) {
    int pivot=a[high];
    int pivIdx=low-1;
    for(int i=low; i<high; i++) {
        if(a[i]<=pivot) {
            swap(a[++pivIdx],a[i]);
        }
    }
    swap(a[++pivIdx],a[high]);
    return pivIdx;
}

// Deliberately written a[] to showcase interfacing of C++ function with C-styled function
int randPartition(int a[], int start, int end) {
    int random=start+rand()%(end-start+1);
    swap(a[random],a[start]);         // Swapped with end in case of hoare partition
    return partition(a,start,end);  // Overloaded function will be called
}

void quickSort(vector<int>& a, int low, int high) {
    if(low<high) {
        int pivIdx=randPartition(a.data(),low,high);
        quickSort(a,low,pivIdx);
        quickSort(a,pivIdx+1,high);
    }
}

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    init(a);
    print(a);
    quickSort(a,0,n-1);
    print(a);
}

int main() {
    solve();
    return 0;
}