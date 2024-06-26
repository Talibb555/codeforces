// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;cin>>n;
//     vector<pair<int,pair<int,int>>> v;
//     for(int i=1;i<=n;i++){
//         int x,y;cin>>x>>y;
//         v.push_back({x,{-1,i}});
//         v.push_back({y,{1,i}});
//     }
//     sort(v.begin(),v.end());
//     // for(auto i:v) cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
//     vector<int> rooms;
//     int occupied=0,max_rooms=0;
//     int ans[20000];
//     for(auto i:v){
//         int in_out=i.second.first;
//         int ind=i.second.second;
//         int x=rooms.size();
//         if(in_out==1){
//             rooms.push_back(ans[ind]);
//         }
//         else if(x==occupied){
//             ans[ind]=++max_rooms;
//         }
//         else{
//             ans[ind]=rooms[occupied++];
//         }
//     }
//     cout << max_rooms << endl;
// 	for (int i = 1; i <= n; i++)
// 	{
// 		cout << ans[i] << " ";
// 	}
//     return 0;
// }
#include <bits/stdc++.h>
#define pb push_back
#define endl '\n'
#define lli long long int
#define li long int
#define ld long double
#define vii vector<int, int>
#define pii pair<int, int>
using namespace std;
const lli mod = 1e9 + 7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, y;
	cin >> n;
	vector<pair<int, pii>> v;
	for (int i = 1; i <= n; i++)
	{
		cin >> x >> y;
		v.pb({x, {-1, i}}); // comes in
		v.pb({y, {1, i}});  // goes out
	}
	sort(v.begin(), v.end());

	vector<int> rooms;
	int occupied = 0, max_rooms = 0, in_or_out, ind;
	int ans[200005];
	for (auto ele : v)
	{
		in_or_out = ele.second.first;
		ind = ele.second.second;

		if (in_or_out == 1)
		{
			// going out, so add that room number to rooms
			rooms.pb(ans[ind]);
		}
		else if (occupied == rooms.size())
		{
			// no more vacant rooms, so increase number of rooms
			ans[ind] = ++max_rooms;
		}
		else
		{
			// give a room and increase occupancy count
			ans[ind] = rooms[occupied++];
		}
	}
	cout << max_rooms << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}