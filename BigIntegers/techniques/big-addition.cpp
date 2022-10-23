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

char digitToChar(int digit){
    return digit + '0';
}

int charToDigit(char ch){
    return ch - '0'; //implicity cast
}

string addNumbers(string n1, string n2){
    if (n1.length() > n2.length())
        swap(n1, n2);

    string ans = "";

    //reverse 
    reverse(n1.begin(), n1.end());
    reverse(n2.begin(), n2.end());
    
    int carry = 0;
    for(int i = 0; i < n1.length(); i++){
        int d1 = charToDigit(n1[i]);
        int d2 = charToDigit(n2[i]);

        int sum = d1 + d2 + carry;

        int outputDigit = sum % 10;
        carry = sum / 10;

        ans.pb(digitToChar(outputDigit));
    }

    for(int i = n1.length(); i < n2.length(); i++){
        int d2 = charToDigit(n2[i]);
        int sum = d2 + carry;
        int outputDigit = sum % 10;
        carry = sum / 10;

        ans.pb(digitToChar(outputDigit));
    }

    // if carry is generated
    if (carry){
        ans.pb('1');
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string str1,str2;

    cin >> str1 >> str2;

    cout << addNumbers(str1,str2) << endl;


    return 0;
}