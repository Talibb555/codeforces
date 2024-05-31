#include <bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int hsh[N];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1'){
                hsh[i+1]=1;
            }
            else
            {
                hsh[i+1]=0;
            }
            
        }
        for (int i = 1; i <= n; i=i*2)
        {
        }
        
    }
    
    return 0;
}