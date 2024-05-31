#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> &v, int ind, int top, int right, int bottom, int left, long long &sum){
    // if(v.size()==ind){
    //     // if(top==right && right==bottom && bottom==left && left==sum/4){
    //     //     cout<<"as"<<endl;
    //     //     return true;
    //     // }
    //     // cout<<"as"<<endl;
    //     // return false;
    //     cout<<top<<" "<<right<<" "<<bottom<<" "<<left<<endl;
    //     return true;
    // }
    // // for(auto i:v) cout<<i<<" ";
    // // cout<<endl;
    // // if(top>sum/4 || left>sum/4 || bottom>sum/4 || right>sum/4 ) return false;
    // if((v[ind]+top<=sum/4) && (v,ind+1,top+v[ind],right,bottom,left,sum)) return true;
    // if((v[ind]+right<=sum/4) && (v,ind+1,top,right+v[ind],bottom,left,sum)) return true;
    // if((v[ind]+bottom<=sum/4) && (v,ind+1,top,right,bottom+v[ind],left,sum)) return true;
    // if((v[ind]+left<=sum/4) && (v,ind+1,top,right,bottom,left+v[ind],sum)) return true;
    // return false;
    if(v.size()==ind){
        // for(auto i:v) cout<<i<<" ";
        // cout<<endl;
        // cout<<top<<" "<<right<<" "<<bottom<<" "<<left<<endl;
        return true;
    }
    if(v[ind]+top<=sum/4){
        if(f(v,ind+1,top+v[ind],right,bottom,left,sum)) return true;
    }
    if(v[ind]+right<=sum/4){
        if(f(v,ind+1,top,right+v[ind],bottom,left,sum)) return true;
    }
    if(v[ind]+bottom<=sum/4){
        if(f(v,ind+1,top,right,bottom+v[ind],left,sum)) return true;
    }
    if(v[ind]+left<=sum/4){
        if(f(v,ind+1,top,right,bottom,left+v[ind],sum)) return true;
    }
    return false;
}

int main()
{
    vector<int> v={1,1,2,2,2};
    // vector<int> v={3,3,3,3,4};
    long long sum=0;
    for (int i = 0; i < v.size(); i++)
    {
        sum+=v[i];
    }
    
    cout<<f(v,0,0,0,0,0,sum);
    return 0;
}