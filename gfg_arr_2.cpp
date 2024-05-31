#include <bits/stdc++.h>
using namespace std;

void f(int a[], int n, int b[],vector<int> v, int m, int i, int j, int ind, bool flag){
    if(flag){
        if(ind){
            for(auto i:v) cout<<i<<" ";
            cout<<endl;
        }
        for (int k = i; k < n; k++)
        {
            if(!ind){
                v.push_back(a[k]);
                f(a,n,b,v,m,k+1,j,ind+1,!flag);
                v.pop_back();
            }
            else
            {
                if(a[k]>v[ind-1]){
                    v.push_back(a[k]);
                    f(a,n,b,v,m,k+1,j,ind+1,!flag);
                    v.pop_back();
                }
            }
            
        }
        
    }
    else
    {
        for (int l = j; l < m; l++)
        {
            if(b[l]>v[ind-1]){
                v.push_back(b[l]);
                f(a,n,b,v,m,i,l+1,ind+1,!flag);
                v.pop_back();
            }
        }
        
    }
    
}

int main()
{
    int a[]={10,15,25};
    int n=3;
    int b[]={1,5,20,30};
    int m=4;
    vector<int> v;
    f(a,n,b,v,m,0,0,0,true);
    return 0;
}