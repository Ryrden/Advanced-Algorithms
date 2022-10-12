//https://leetcode.com/problems/maximum-score-from-removing-stones/
#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define hashMap unordered_map
#define minHeap priority_queue<int, vector<int>, greater<int>>
#define maxHeap priority_queue<int>

using namespace std;

int maximumScore(int a, int b, int c) {
    maxHeap piles;

    piles.push(a);
    piles.push(b);
    piles.push(c);

    int maximumScore = 0;
    while(piles.size() > 1) {
        int num1 = piles.top();
        piles.pop();
        int num2 = piles.top();
        piles.pop();

        maximumScore++;
        
        if (--num1 > 0)
            piles.push(num1);
        if (--num2 > 0)
            piles.push(num2);

    }

    return maximumScore;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cout << maximumScore(2,4,6) << endl; //6
    cout << maximumScore(4,4,6) << endl; //7
    cout << maximumScore(1,8,8) << endl; //8
    cout << maximumScore(6,2,1) << endl; //3
    cout << maximumScore(4,4,7) << endl; //7

    return 0;
}