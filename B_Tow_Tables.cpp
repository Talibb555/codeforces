#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,m1;
    cin>>n1>>m1;
    int a1[n1][m1];
    
    for (int i = 0; i < n1; i++)
    {
        string s;
        cin>>s;
        for (int j = 0; j < m1; j++)
        {
            a1[i][j]=s[j]-'0';
        }
        
    }
    int n2,m2;
    cin>>n2>>m2;
    int a2[n2][m2];
    for (int i = 0; i < n2; i++)
    {
        string s;
        cin>>s;
        for (int j = 0; j < m2; j++)
        {
            a2[i][j]=s[j]-'0';
        }
        
    }
    int ans=-1;
    pair<int,int> p;
    for (int x = -50; x <= 50; x++)
    {
        for (int y = -50; y <= 50; y++)
        {
            int cur=0;
            for (int i = 0; i < n1; i++)
            {
                for (int j = 0; j < m1; j++)
                {
                    if(i+x>=0 && i+x<n2 && j+y>=0 && j+y<m2){
                        cur+=a1[i][j]*a2[i+x][j+y];
                        // cout<<"aaa"<<endl;
                    }
                }
                
            }
            if(cur>ans) p={x,y};
            ans=max(cur,ans);
        } 
    }
    cout<<p.first<<" "<<p.second<<endl;
    
    return 0;
}