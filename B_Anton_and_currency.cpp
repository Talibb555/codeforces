#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> v;
    int ind=-1;
    for (int i = 0; i < s.length(); i++)
    {
        v.push_back((int)(s[i]-'0'));
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (v[i]%2==0)
        {
            ind=i;
            if(v[s.length()-1]>v[ind]) break;
        }
        
    }
    if(ind==-1){
        cout<<ind;
    }
    else
    {
        swap(v[ind],v[s.length()-1]);
        for (int i = 0; i < s.length(); i++)
        {
            cout<<v[i];
        }
        
    }
    
    
    

    return 0;
}