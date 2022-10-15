#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define hashMap unordered_map
#define minHeap priority_queue<int, vector<int>, greater<int>>
#define maxHeap priority_queue<int>
#define print(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< ' '; cout << endl

using namespace std;

int uniqueNo(vector<int> arr){
    int n = arr.size();

    int cumulativeXor = 0;
    for(int i = 0; i < n; i++){
        cumulativeXor ^= arr[i];
    }
    return cumulativeXor;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> arr{1,3,5,4,3,1,5};

    cout << uniqueNo(arr) << endl;


    return 0;
}