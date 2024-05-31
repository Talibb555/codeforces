#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n=s.length()-1;
        int count=0, i=0;
        string ans="";
        while (n>=0)
        {
            i++;
            if ( (s[n]=='5' || s[n]=='0') && ans.length()==0)
            {
                ans+=s[n];
            }
            else if ( (s[n]=='2' ) && ans=="5" && ans.length()==1)
            {
                ans+=s[n];
            }
            else if ( (s[n]=='7' ) && ans=="5" && ans.length()==1)
            {
                ans+=s[n];
            }
            else if ( (s[n]=='0' ) && ans=="0" && ans.length()==1)
            {
                ans+=s[n];
            }
            else if ( (s[n]=='5' ) && ans=="0" && ans.length()==1)
            {
                ans+=s[n];
            }
            n--;
            if (ans.length()==2)
            {
                break;
            }
            
        }
        // cout<<ans<<endl;
        cout<<i-2<<endl;
    }

    return 0;
}