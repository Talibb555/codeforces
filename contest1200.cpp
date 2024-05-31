#include <bits/stdc++.h>
using namespace std;

int b;

void start(int r, int c, int m, vector<string> &a, bool vis[][200001], long long b2)
{
    vis[r][c] = true;
    // b2+=1;
    if (r == 0)
    {
        if (a[1][c] == 'B' && vis[1][c] == false)
        {
            cout<<"asg"<<endl;
            start(1, c, m, a, vis, b2+1);
        }
        else if (c + 1 < m)
        {
            if (a[0][c + 1] == 'B')
            {
                cout<<"asg"<<endl;
                start(0, c + 1, m, a, vis, b2+1);
            }
        }
    }
    else
    {
        if (a[0][c] == 'B' && vis[0][c] == false)
        {
            cout<<"asg"<<endl;
            start(0, c, m, a, vis, b2+1);
        }
        else if (c + 1 < m)
        {
            if (a[1][c + 1] == 'B')
            {
                cout<<"asg"<<endl;
                start(1, c + 1, m, a, vis, b2+1);
            }
        }
    }
    // b=b2;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int n;
        // cin>>n;
        // string ans=to_string(n);
        // long long res=(ans.size()-1)*9+(ans[0]-'0');
        // cout<<res<<endl;
        // int n;
        // cin >> n;
        // string s;
        // cin >> s;
        // unordered_map<string, int> m;
        // int flag=1;
        // for (int i = 0; i < n - 1; i++)
        // {
        //     string temp;
        //     temp = s.substr(i, 2);
        //     string g = s.substr(i + 2);
        //     if (g.find(temp) != string::npos)
        //     {
        //         cout << "YES" << endl;
        //         flag=0;
        //         break;
        //     }
        //     // if()
        //     // m[t]++;
        // }
        // if(flag) cout<<"NO"<<endl;
        // for (auto i : m)
        //     cout << i.first << " " << i.second << endl;
        int m;
        cin >> m;
        vector<string> a;
        for (int i = 0; i < 2; i++)
        {
            string s;
            cin >> s;
            a.push_back(s);
        }
        string ans = "NO";
        bool vis[2][200001];
        for (int j = 0; j < m; j++)
        {
            vis[0][j] = vis[1][j] = false;
        }
        long long b1 = 0, b2 = 0;
        for (int i = 0; i < m; i++)
        {
            if (a[0][i] == 'B')
                b1++;
            if (a[1][i] == 'B')
                b1++;
        }
        for (int i = 0; i < m; i++)
        {
            if (a[0][i] == 'B' && a[1][i] == 'B')
            {
                b2 = 0;
                start(0, i, m, a, vis, 0);
                if (b2 == b1)
                {
                    ans = "YES";
                    cout << "YES" << endl;
                    break;
                }
                for (int j = 0; j < m; j++)
                {
                    vis[0][j] = vis[1][j] = false;
                }
                b2 = 0;
                start(1, i, m, a, vis, 0);
                if (b2 == b1)
                {
                    ans = "YES";
                    cout << "YES" << endl;
                    break;
                }
            }
            else if (a[0][i] == 'B')
            {
                b2 = 0;
                start(0, i, m, a, vis, 0);
                if (b2 == b1)
                {
                    ans = "YES";
                    cout << "YES" << endl;
                    break;
                }
            }
            else if (a[1][i] == 'B')
            {
                b2 = 0;
                start(1, i, m, a, vis, 0);
                if (b2 == b1)
                {
                    ans = "YES";
                    cout << "YES" << endl;
                    break;
                }
            }
        }
        cout<<b1<<" "<<b2<<" "<<b<<endl;
        cout << ans << endl;
    }

    return 0;
}