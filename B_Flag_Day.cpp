#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int hsh[n + 1] = {0};
    for (int i = 0; i < m; i++)
    {
        int x,y,z;
        cin >> x>>y>>z;
        if(hsh[x]==0 && hsh[y]==0 && hsh[z]==0){
            hsh[x]=1;
            hsh[y]=2;
            hsh[z]=3;
        }
        else if(hsh[x]!=0){
            if(hsh[x]==1) hsh[y]=2,hsh[z]=3;
            else if(hsh[x]==2) hsh[y]=1,hsh[z]=3;
            else hsh[y]=2,hsh[z]=1;
        }
        else if(hsh[y]!=0){
            if(hsh[y]==1) hsh[x]=2,hsh[z]=3;
            else if(hsh[y]==2) hsh[x]=1,hsh[z]=3;
            else hsh[x]=2,hsh[z]=1;
        }
        else if(hsh[z]!=0){
            if(hsh[z]==1) hsh[y]=2,hsh[x]=3;
            else if(hsh[z]==2) hsh[y]=1,hsh[x]=3;
            else hsh[y]=2,hsh[x]=1;
        }
        
    }
    for (int i = 1; i < n+1; i++)
    {
        cout<<hsh[i]<<" ";
    }
    

    return 0;
}