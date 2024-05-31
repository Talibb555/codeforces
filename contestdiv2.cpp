#include <bits/stdc++.h>
using namespace std;

int N = 1e6 + 6;
vector<int> isprime(N, 1);
vector<int> sprime;

void seive(int n)
{
    isprime[0] = isprime[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            sprime.push_back(i);
            for (int j = i * i; j <= n; j += i)
            {
                isprime[j] = 0;
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    set<int> st;
    for (int j = 0; j < n; j++)
    {
        int tp = v[j];
        for (int i = 0; i < sprime.size(); i++)
        {
            if (tp % sprime[i] == 0)
            {
                if (!st.empty())
                {
                    if (st.find(sprime[i]) != st.end())
                    {
                        cout << "YES" << endl;
                        return;
                    }
                }
                st.insert(sprime[i]);
            }
            while (tp % sprime[i] == 0)
            {
                tp /= sprime[i];
            }
        }
        if (tp != 1)
        {
            if (!st.empty())
            {
                if (st.find(tp) != st.end())
                {
                    cout << "YES" << endl;
                    return;
                }
            }
            st.insert(tp);
        }
    }
    cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     // long long n;
    //     // cin >> n;
    //     // int a[n];
    //     // for (int i = 0; i < n; i++)
    //     // {
    //     //     cin >> a[i];
    //     // }
    //     //     sort(a, a + n);
    //     //     long long ct = 1;
    //     //     long long ct1 = 1;
    //     //     int flag = 0;
    //     //     for (int i = 0; i < n - 1; i++)
    //     //     {
    //     //         if (a[i] == a[i + 1])
    //     //             ct++;
    //     //         else
    //     //         {
    //     //             flag = 1;
    //     //             break;
    //     //         }
    //     //     }
    //     //     for (int i = n - 1; i > 0; i--)
    //     //     {
    //     //         if (a[i] == a[i - 1])
    //     //             ct1++;
    //     //         else
    //     //             break;
    //     //     }
    //     //     if (flag == 0)
    //     //     {
    //     //         cout << (n - 1) * n << endl;
    //     //     }
    //     //     else
    //     //         cout << (ct * ct1) * 2 << endl;
    //     // int flag=0;
    //     // int hsh[100000];
    //     // hsh[0]=0;
    //     // for (int i = 0; i < n; i++)
    //     // {
    //     //     for (int j = 0; j < n; j++)
    //     //     {
    //     //         if(i!=j){
    //     //             if(__gcd(a[i],a[j])!=1) {
    //     //                 // cout<<"YES"<<endl;
    //     //                 flag=1;
    //     //                 break;
    //     //             }
    //     //         }
    //     //     }
    //     //     if(flag==1) break;
    //     // }
    //     // for (int i = 1; i < n-1; i++)
    //     // {
    //     //     hsh[i]=__gcd(hsh[i-1],a[i]);
    //     // }
    //     // for (int i = 0; i < n; i++)
    //     // {
    //     //     cout<<hsh[i]<<" ";
    //     // }

    //     // if(flag) cout<<"YES"<<endl;
    //     // else cout<<"NO"<<endl;
    //     int n, m;
    //     cin >> n >> m;
    //     vector<pair<int, int>> notfriend;
    //     for (int i = 0; i < m; i++)
    //     {
    //         // cin>>notfriend[i].first>>notfriend[i].second;
    //         int x, y;
    //         cin >> x >> y;
    //         if (x > y)
    //             swap(x, y);
    //         notfriend.push_back({x, y});
    //     }
    //     notfriend.push_back({n + 1, n + 1});
    //     sort(notfriend.begin(), notfriend.end());
    //     multiset<int> ms;
    //     for (auto i : notfriend)
    //     {
    //         ms.insert(i.second);
    //     }
    //     long long ans = 0, j = 0;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         ans += *ms.begin() - i;
    //         while (j < m && notfriend[j].first == i)
    //         {
    //             ms.erase(ms.find(notfriend[j].second));
    //             j++;
    //         }
    //     }
    //     cout << ans << endl;
    // }

    return 0;
}