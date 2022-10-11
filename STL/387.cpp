//https://leetcode.com/problems/first-unique-character-in-a-string/
#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define hashMap unordered_map

using namespace std;

/* 
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

int firstUniqChar(string s) {
    hashMap<char, int> letters;

    for (int i = 0; i < s.length(); i++) {
        letters[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (letters[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cout << firstUniqChar("leetcode") << endl;
    cout << firstUniqChar("aabb") << endl;
    cout << firstUniqChar("loveleetcode") << endl;

    return 0;
}