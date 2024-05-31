#include <bits/stdc++.h>
using namespace std;

bool f(long long mid,long long nb, long long ns, long long nc, long long pb, long long ps, long long pc, long long lc, long long lb, long long ls, long long r){
    long long bread=max(lb*mid-nb,(long long)0);
    long long sausage=max(ls*mid-ns,(long long)0);
    long long cheese=max(lc*mid-nc,(long long)0);
    return bread*pb+sausage*ps+cheese*pc<=r;
}

int main()
{
    string s;
    cin>>s;
    long long nb,ns,nc;
    cin>>nb>>ns>>nc;
    long long pb,ps,pc;
    cin>>pb>>ps>>pc;
    long long r;
    cin>>r;

    long long lc=0,lb=0,ls=0;
    for(auto i:s){
        if(i=='C') lc++;
        else if(i=='B') lb++;
        else ls++;
    }

    long long lo=0;
    long long hi=r+100;
    long long ans=0;
    while(lo<=hi){
        long long mid=lo+(hi-lo)/2;
        if(f(mid,nb,ns,nc,pb,ps,pc,lc,lb,ls,r)){
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<ans<<endl;

    return 0;
}