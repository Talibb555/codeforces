#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<string, int> m;
    int mt[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int sym = 0;
    string ans;
    int ct=0;
    for (int i = 0; i <= s.length() - 10; i++)
    {
        int day,month,year;
        string x = s.substr(i, 10);
        int t1=0;
        string d1,mn1,y1;
        // cout<<x<<endl;
        for (int j = 0; j < x.length(); j++)
        {
            if(x[j]=='-'){
                // if(j==2 || j==5) sym++;
                // else break;
                sym++;
                t1++;
                continue;
            }
                if(t1==0) d1.push_back(x[j]);
                if(t1==1) mn1.push_back(x[j]);
                if(t1==2) y1.push_back(x[j]);
        }
        // cout<<d1<<" "<<mn1<<" "<<y1<<endl;
        // cout<<sym<<endl;
        if(sym==2 && d1.length()==2 && mn1.length()==2 && y1.length()==4){
            int t=0;
            string d,mn,y;
            for (int i = 0; i < x.length(); i++)
            {
                if(x[i]=='-') 
                {
                    t++;
                    continue;
                }
                if(t==0) d.push_back(x[i]);
                if(t==1) mn.push_back(x[i]);
                if(t==2) y.push_back(x[i]);
            }
            day=stoi(d);
            month=stoi(mn);
            year=stoi(y);
            // cout<<day<<" "<<month<<" "<<year<<endl;
        }
        if (sym == 2 && (month>=1 && month<=12) && (day>=1 && day<=mt[month])  &&  (year>=2013 && year<=2015) && d1.length()==2 && mn1.length()==2 && y1.length()==4)
        {
            m[x]++;
            // sym=0;
            // cout<<1<<endl;
        }
        sym=0;
        if(ct<m[x]){
            ans=x;
            ct=m[x];
        }
        d1.clear(),mn1.clear(),y1.clear();
    }
    cout<<ans<<endl;
    // for (auto i : m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    //     // cout << i.first << endl;
    //     // break;
    // }

    return 0;
}