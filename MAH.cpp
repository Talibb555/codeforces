#include <bits/stdc++.h>
using namespace std;

vector<int> NSL(vector<int>&v){
    vector<int> ans;
    stack<pair<int,int>> st;
    for(int i=0;i<v.size();i++){
        if(st.size()==0) ans.push_back(-1);
        else{
            if(st.top().first<v[i]) ans.push_back(st.top().second);
            else{
                while(st.size()>0 && st.top().first>=v[i]) st.pop();
                if(st.size()==0) ans.push_back(-1);
                else ans.push_back(st.top().second);
            }
        }
        st.push({v[i],i});
    }
    return ans;
}

vector<int> NSR(vector<int>&v){
    vector<int> ans;
    stack<pair<int,int>> st;
    for(int i=v.size()-1;i>=0;i--){
        if(st.size()==0) ans.push_back(v.size());
        else{
            if(st.top().first<v[i]) ans.push_back(st.top().second);
            else{
                while(st.size()>0 && st.top().first>=v[i]) st.pop();
                if(st.size()==0) ans.push_back(v.size());
                else ans.push_back(st.top().second);
            }
        }
        st.push({v[i],i});
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int max_area(vector<int>&v){
    vector<int> nsl=NSL(v);
    vector<int> nsr=NSR(v);
    int area=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        area=max(area,(nsr[i]-nsl[i]-1)*v[i]);
    }
    return area;
}

int main()
{
    // vector<int> v={6,2,5,4,5,1,6};
    // cout<<max_area(v);
    vector<vector<int>> a;
    vector<int> v;
    for(int j=0;j<m;j++) v.push_back(a[0][j]);
    int ans=max_area(v);
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0) v[j]=0;
            else v[j]+=a[i][j];
        }
        ans=max(ans,max_area(v));
    }
    

    return 0;
}