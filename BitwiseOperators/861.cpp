//https://leetcode.com/problems/score-after-flipping-matrix/
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

void flipRow(vector<vector<int>> &grid, int row){
    for(int column = 0; column < grid[0].size(); column++){
        grid[row][column] ^= 1;
    }
}

void flipColumn(vector<vector<int>> &grid, int column){
    for(int row = 0; row < grid.size(); row++){
        grid[row][column] ^= 1;
    }
}

int numFromBits(vector<int> bits){
    int num = 0;
    int exp = 0;
    for(int i = bits.size() - 1; i >= 0; i--){
        num += (bits[i] * (1 << exp++));
    }
    return num;
}

//Greedy Strategy, just flip if first num at row are equal 0 and column has more 0s than 1
int matrixScore(vector<vector<int>> &grid) {
    int m = grid.size();
    int n = grid[0].size();

    //flip if row start with 0
    for(int row = 0; row < m; row++){
        if (grid[row][0] == 0){
            flipRow(grid, row);
        }
    }

    //flip if column has more 0s than 1s in the column
    for(int column = 0; column < n; column++){
        int oneCnt = 0;
        for(int row = 0; row < m; row++){
            oneCnt += grid[row][column];
        }

        if (oneCnt < (m - oneCnt)){
            flipColumn(grid, column);
        }
    }

    int score = 0;
    for(auto row : grid){
        score += numFromBits(row);
    }
    return score;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<vector<int>> matrix1{{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    vector<vector<int>> matrix2{{0}};
    vector<vector<int>> matrix3{{1,0,0,1},{1,1,1,0},{1,1,1,0}};
    vector<vector<int>> matrix4{{0,1,1},{1,1,1},{0,1,0}};
    vector<vector<int>> matrix5{{0,1},{0,1},{0,1},{0,0}};

    cout << matrixScore(matrix1) << endl; //39
    cout << matrixScore(matrix2) << endl; //1
    cout << matrixScore(matrix3) << endl; //38
    cout << matrixScore(matrix4) << endl; //18
    cout << matrixScore(matrix5) << endl; //11

    return 0;
}
