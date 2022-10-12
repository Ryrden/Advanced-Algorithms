//https://leetcode.com/problems/find-k-closest-elements/
#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define hashMap unordered_map
#define minHeap priority_queue<int, vector<int>, greater<int>>
#define maxHeap priority_queue<int>
#define print(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

using namespace std;

vector<int> findClosestElements(vector<int> arr, int k, int x) {
    priority_queue<pi, vector<pi>, greater<pi>> heap;
    for(int i = 0; i < arr.size(); i++){
        heap.push({abs(arr[i]-x),arr[i]}); // |arr[i] -x | = 0 is the most closer
    }

    multiset<int> uniques;
    for(int i = 1;i <= k; i++){
        uniques.insert(heap.top().second);
        heap.pop();
    }

    vector<int> result;
    for(auto it = uniques.begin(); it != uniques.end(); it++){
        result.push_back(*it);
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> vect1{1,2,3,4,5};
    vector<int> vect2{1,4,6,7,12,15,23,35,42,52,64,82,102,108,124,164,184};

    vector<int> ans1 = findClosestElements(vect1,4,3);
    vector<int> ans2 = findClosestElements(vect1,4,-1);
    vector<int> ans3 = findClosestElements(vect2,10,15);

    print(ans1,0,ans1.size());
    print(ans2,0,ans2.size());
    print(ans3,0,ans3.size());

    return 0;
}