#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return a>b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long tot=0;
        vector<long long> v;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='L'){
                v.push_back((n-1-i)-i);
                tot+=i;
            }
            else
            {
                v.push_back(i-(n-1-i));
                tot+=n-i-1;
            }
            
        }
        sort(v.begin(),v.end(),cmp);
        for (int i = 0; i < n; i++)
        {
            // if(v[i]>0) tot+=v[i];
            // cout<<tot<<" ";
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}