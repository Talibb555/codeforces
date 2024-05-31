#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> a,b;
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        sum+=x;
        if(x>0) a.push_back({x,i});
        else b.push_back({-1*x,i});
    }
    if(sum>0){
        cout<<"first"<<endl;
        return 0;
    }
    if(sum<0){
        cout<<"second"<<endl;
        return 0;
    }
    int flag=0, winner;
    for (int i = 0; i < min(a.size(),b.size()); i++)
    {
        if(a[i].first>b[i].first){
            cout<<"first"<<endl;
            flag=0;
            break;
        }
        else if (a[i].first<b[i].first)
        {
            cout<<"second"<<endl;
            flag=0;
            break;
        }
        else if (a[i].first==b[i].first)
        {
            flag=1;
            if (a[i].second<b[i].second)
            {
                // cout<<"second"<<endl;
                winner=2;
            }
            else
            {
                // cout<<"first"<<endl;
                winner=1;
            }
            
        }
        
    }
    if(flag==1){
        if(winner==2) cout<<"second"<<endl;
        else cout<<"first"<<endl;
    }
    
    return 0;
}