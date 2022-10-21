//https://leetcode.com/problems/decode-xored-permutation/
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

//UniqueNum Case linear case 1N + 1
vector<int> decode(vector<int>& encoded) {
    int first = 0;
    int n = encoded.size() + 1;

    //Find the unique Num in the permutation of first n positive integers
    for (int i = 1; i <= n; i++){
        first ^= i;
    }
    
    //particular case
    for(int i = 1; i < encoded.size(); i+=2){
        first ^= encoded[i];
    }
    vector<int> ans;

    ans.pb(first);
    for(int i = 1; i < n; i++){
        int k = ans[i-1] ^ encoded[i-1];
        ans.pb(k);
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> vect1{1,2,3};
    vector<int> vect2{6,5,4,6};

    vector<int> ans1 = decode(vect1);
    print(ans1,0,ans1.size());
    vector<int> ans2 = decode(vect2);
    print(ans2,0,ans2.size());

    return 0;
}