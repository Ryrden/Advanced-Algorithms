//https://leetcode.com/problems/find-the-shortest-superstring/
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

bool isOverlap(string str1, string str2, int &idx){
    //Verifiy if 2 strings have overlap
    int n = str1.size();
    int m = str2.size();
    for(int i = 0; i < n; i++){
        if(str1.substr(i) == str2.substr(0, n-i)){
            idx = i;
            return true;
        }
    }
    return false;
}

string _shortestSuperstring(vector<string> words, int currentString, int pos){
    if (currentString == ((1 << words.size()) - 1)){
        return words[pos];
    }

    string ans = "";
    int minString = INT_MAX;
    for(int choice = 0; choice < words.size(); choice++){
        if ((currentString & (1 << choice)) == 0){
            int currString = currentString | (1 << choice);
            ans += _shortestSuperstring(words, currString, choice);
            cout << ans << " " << choice << endl;
        }
    }
    return ans;
}

string shortestSuperstring(vector<string>& words) {
    return _shortestSuperstring(words, 0, 0);
    
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<string> vect1{"alex","loves","leetcode"};
    vector<string> vect2{"abc", "def", "bcd"};
    //vector<string> vect2{"catg","ctaagt","gcta","ttca","atgcatc"};

    //cout << shortestSuperstring(vect1) << endl; // alexlovesleetcode
    cout << shortestSuperstring(vect2) << endl; // gctaagttcatgcatc

    return 0;
}