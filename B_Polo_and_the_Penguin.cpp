#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,d;
    cin>>n>>m>>d;
    int a[n][m];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
            v.push_back(a[i][j]);
        }
        
    }
    int t=a[0][0]%d;
    bool flag=true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]%d!=t){
                cout<<-1<<endl;
                flag=false;
                return 0;
            }
        }
    }
    int ans=0;
    int ans1=0;
    int ans2=0;
    sort(v.begin(),v.end());
    if (flag)
    {
        for (int i = 0; i < n*m; i++)
        {
            ans+=abs(v[i]-v[((n*m)/2)]);
        }
        for (int i = 0; i < n*m; i++)
        {
            ans1+=abs(v[i]-v[((n*m)/2)+1]);
        }
        for (int i = 0; i < n*m; i++)
        {
            ans2+=abs(v[i]-v[((n*m)/2)-1]);
        }
        cout<<min(ans, min(ans1, ans2))/d<<endl;
    }
    
    
    
    return 0;
}