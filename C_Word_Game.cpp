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
        vector<vector<string>> v(3);
        map<string,int> m;
        int a[3]={0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin>>s;
                m[s]++;
                v[i].push_back(s);
            }
            
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // cout<<v[i][j]<<" ";
                if(m[v[i][j]]==1) a[i]+=3;
                if(m[v[i][j]]==2) a[i]+=1;
                if(m[v[i][j]]==3) a[i]+=0;
            }
            // cout<<endl;
        }
        for (int i = 0; i < 3; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}