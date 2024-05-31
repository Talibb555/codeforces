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
        int a[n],ans=0;
        vector<int > c(3,0);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%3==0) c[0]++;
            if(a[i]%3==1) c[1]++;
            if(a[i]%3==2) c[2]++;
        } 
        while (*min_element(c.begin(),c.end()) !=n/3)
        {
            for (int i = 0; i < 3; i++)
            {
                if (c[i]>n/3)
                {
                    c[i]--;
                    ans++;
                    c[(i+1)%3]++;
                }
                
            }
            
        }
        // for (int i = 0; i < 3; i++)
        // {
        //     cout<<c[i]<<" ";
        // }
        
        cout<<ans<<endl;
    }
    
    return 0;
}