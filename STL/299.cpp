//https://leetcode.com/problems/bulls-and-cows/
#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define hashMap unordered_map
#define minHeap priority_queue<int, vector<int>, greater<int>>
#define maxHeap priority_queue<int>

using namespace std;

//for those Who know Turing Machine, this is easy

string getHint(string secret, string guess) {
    hashMap<char,int> pos;

    int bulls = 0;
    int cows = 0;
    for(int i = 0; i < secret.size(); i++){
        if (secret[i] == guess[i]){
            bulls++;
            guess[i] = '#';
        }else{
            pos[secret[i]]++;
        }
    }
    for (auto letter : guess){
        if (letter != '#' and pos[letter] > 0)
            cows++;
        pos[letter]--;
    }

    string ans = to_string(bulls) + 'A' + to_string(cows) + 'B';
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cout << getHint("1807", "7810") << endl; //1A3B
    cout << getHint("1123", "0111") << endl; //1A1B

    return 0;
}