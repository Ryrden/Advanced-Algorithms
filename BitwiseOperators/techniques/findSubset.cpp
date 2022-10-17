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

string overlayNumber(string str, int num){
    string ans = "";
    int pos = 0;

    while (num > 0){
        int lastBit = num & 1;
        if (lastBit){
            ans += str[pos];
        }
        pos++;
        num >>= 1;
    }
    return ans;
}

vector<string> generateAllSubsequences(string str){
    int n = (1 << str.size());
    vector<string> AllSubsequences;
    for(int i = 0; i < n; i++){
        string subsequence = overlayNumber(str,i);
        AllSubsequences.pb(subsequence);
    }
    return AllSubsequences;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string str;
    cin >> str;

    vector<string> ans1 = generateAllSubsequences(str);
    print(ans1,0,ans1.size());

    return 0;
}