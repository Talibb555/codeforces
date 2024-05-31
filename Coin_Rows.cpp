// #include<bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// // Memoization table
// unordered_map<string, int> memo;

// // Function to calculate the score
// int calculateScore(const vector<vector<int>>& matrix, int x, int y, int m, bool alice) {
//     // Base case: reached the destination cell
//     if (x == 1 && y == m)
//         return alice ? matrix[x][y] : 0;

//     // Check if the state has already been memoized
//     string state = to_string(x) + "-" + to_string(y) + "-" + to_string(alice);
//     if (memo.find(state) != memo.end())
//         return memo[state];

//     int coins = matrix[x][y];

//     // Alice's turn
//     if (alice) {
//         int moveRight = (y < m) ? calculateScore(matrix, x, y + 1, m, alice) : INT_MAX;
//         int moveDown = (x < 1) ? calculateScore(matrix, x + 1, y, m, alice) : INT_MAX;
//         int minScore = min(moveRight, moveDown);

//         memo[state] = coins + minScore;
//         return memo[state];
//     }
//     // Bob's turn
//     else {
//         int moveRight = (y < m) ? calculateScore(matrix, x, y + 1, m, alice) : 0;
//         int moveDown = (x < 1) ? calculateScore(matrix, x + 1, y, m, alice) : 0;
//         int maxScore = max(moveRight, moveDown);

//         memo[state] = coins + maxScore;
//         return memo[state];
//     }
// }

// int main() {
//     int n = 2; // Number of rows
//     int m;     // Number of columns

//     cout << "Enter the number of columns: ";
//     cin >> m;

//     vector<vector<int>> matrix(n + 1, vector<int>(m + 1));

//     cout << "Enter the elements of the matrix:" << endl;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     int score = calculateScore(matrix, 1, 1, m, true);

//     cout << "The score of the game is: " << score << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[2][n];
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++) cin>>a[i][j];
        }
        vector<int> pf1(n,0),pf2(n,0);
        pf1[0]=a[0][0];
        pf2[0]=a[1][0];
        for(int i=1;i<n;i++){
            pf1[i]=a[0][i]+pf1[i-1];
            pf2[i]=a[1][i]+pf2[i-1];
        }
        // for(auto i:pf1) cout<<i<<" ";
        // cout<<endl;
        // for(auto i:pf2) cout<<i<<" ";
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(i==0) ans=min(ans,pf1[n-1]-pf1[0]);
            else if(i==n-1) ans=min(ans,pf2[n-2]);
            else ans=min(ans,max(pf2[i-1],pf1[n-1]-pf1[i]));
            // cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}