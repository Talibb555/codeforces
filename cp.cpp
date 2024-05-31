#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        int sum=0;
        int even=0;
        int zero=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') zero=1;
            if((s[i]-'0')%2==0) even++;
            sum+=s[i]-'0';
        }
        if((zero&&even>=2&&(sum%3==0))) cout<<"red"<<endl;
        else cout<<"cyan"<<endl;
    }
    
    return 0;
}