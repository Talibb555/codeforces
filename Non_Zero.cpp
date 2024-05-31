

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   long long int sum=0,cnt=0;
    set<long long int> s;
    s.insert(0);
    for(int i=0;i<n;i++){
        sum+= v[i];
        if(s.find(sum)!=s.end()){
            cnt++;
            s.clear();
            s.insert(0);
            sum= v[i];
        }
        s.insert(sum);
    }
   cout<<cnt<<endl;
   return 0;
}
