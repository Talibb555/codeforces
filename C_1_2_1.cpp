#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  string s="1";
  string ans=s;
  for(int i=2;i<=n;i++){
    ans=s+" "+to_string(i)+" "+s;
    s=ans;
  }
  cout<<ans<<endl;
  return 0;
}