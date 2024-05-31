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
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int l=0,r=n-1;
        int suml=0, sumr=0;
        int ct=0, ansl=0, ansr=0;
        while (l<=r)
        {
            if(ct%2==0){
                int nsuml=0;
                while (l<=r && nsuml<=sumr)
                {
                    nsuml+=a[l];
                    l++;
                }
                ansl+=nsuml;
                suml=nsuml;
            }
            else{
                int nsumr=0;
                while (l<=r && nsumr<=suml)
                {
                    nsumr+=a[r];
                    r--;
                }
                ansr+=nsumr;
                sumr=nsumr;
            }
            ct++;
        }
        cout<<ct<<" "<<ansl<<" "<<ansr<<endl;
    }
    
    return 0;
}