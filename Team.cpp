#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(m<n-1 || m>2*n+2) cout<<-1<<endl;
    else{
        if(m==n-1){
            cout<<"0";
            for(int i=0;i<m;i++)cout<<"10";
            return 0;
        }
        while (n>0 && m>0)
        {
            if(m<2*n){
                cout<<"10";
                m--;n--;
            }
            else{
                cout<<"110";
                m-=2;n--;
            }
        }
        for(int i=0;i<m;i++) cout<<"1";
    }
    return 0;
}