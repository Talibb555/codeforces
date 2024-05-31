// #include <bits/stdc++.h>
// using namespace std;

// int rec(int n, int m){
//     if(n==m) return 0;
//     if(n<0 || n>1e4) return 1e9;
//     int blue=1+rec(n-1,m);
//     int red=1e9;
//     if(n<m) red=1+rec(n*2,m);
//     return min(red,blue);
// }

// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     cout<<rec(n,m);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// const int MAXN = 2e5+5;
// int dp[MAXN];

// int rec(int n, int m){
//     if(n == m) return 0;
//     if(n < 0 || n > MAXN) return 1e9;
//     if(dp[n] != -1) return dp[n];
//     int red = 1e9;
//     if(n < m) red = 1 + rec(n*2, m);
//     int blue = 1 + rec(n-1, m);
//     dp[n] = min(red, blue);
//     return dp[n];
// }

// int main()
// {
//     memset(dp, -1, sizeof(dp)); // initialize dp array to -1
//     int n, m;
//     cin >> n >> m;
//     cout << rec(n, m) << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

const int N=1e4+5;
int dist[N];

int main()
{
    int n,m;
    cin>>n>>m;
    queue<int> q;
    q.push(n);
    dist[n]=0;
    while (!q.empty())
    {
        int curr=q.front();
        q.pop();
        if(curr==m) break;
        int red=2*curr;
        int blue=curr-1;
        if(red>0 && red<N && !dist[red]){
            dist[red]=1+dist[curr];
            q.push(red);
        }
        if(blue>0 && blue<N && !dist[blue]){
            dist[blue]=1+dist[curr];
            q.push(blue);
        }
    }
    cout<<dist[m]<<endl;
    
    return 0;
}
