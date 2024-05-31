#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;
        vector<int> hsh(26, 0);
        int f = 0;
        if (s == t)
        {
            // cout<<"YES"<<endl;
            // continue;
            f=0;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
                hsh[s[i] - 'a']++;
            for (int i = 0; i < t.size(); i++)
                hsh[t[i] - 'a']--;
            for(auto i:hsh){
                if(i!=0){
                    f=1;
                    break;
                }
            }
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != t[i] && max(i, n - i - 1) < k)
                {
                    // cout<<"NO"<<endl;
                    // continue;
                    f=1;
                }
            }
        }
        if(f==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        // cout<<"YES"<<endl;
    }

    return 0;
}