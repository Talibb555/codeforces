// #include <bits/stdc++.h>
// using namespace std;
// int ct=0;
// void subString(string s, int n)
// {
//     // Pick starting point in outer loop
//     // and lengths of different strings for
//     // a given starting point
//     for (int i = 0; i < n; i++)
//     {
//         for (int len = 1; len <= n - i; len++)
//         {
//             cout << s.substr(i, len) << endl;
//             ct++;
//         }
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         // int n;
//         // cin >> n;
//         // long long area, side;
//         // side = n / 2;
//         // if (n & 1)
//         //     area = side * (side + 1) + n / 2 + 1;
//         // else
//         //     area = side * (side + 1);
//         // cout << (int)sqrt(area) << endl;
//         string s="399996";
//         subString(s,s.length());
//         cout<<ct<<endl;
//     }

//     return 0;
// }
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// the number of subarrays with at most K distinct elements
int most_k_chars(string& s, int k)
{
	if (s.size() == 0) {
		return 0;
	}
	unordered_map<char, int> map;
	int num = 0, left = 0;

	for (int i = 0; i < s.size(); i++) {
		map[s[i]]++;
		while (map.size() > k) {
			map[s[left]]--;
			if (map[s[left]] == 0) {
				map.erase(s[left]);
			}
			left++;
		}
		num += i - left + 1;
	}
	return num;
}

int exact_k_chars(string& s, int k)
{
	return most_k_chars(s, k) - most_k_chars(s, k - 1);
}

// Driver Program
int main()
{
	string s1 = "399996";
	int k = 1;
	cout << "Total substrings with exactly " << k
		<< " distinct characters : "
		<< exact_k_chars(s1, k) << endl;

	// string s2 = "aabab";
	// k = 2;
	// cout << "Total substrings with exactly " << k
	// 	<< " distinct characters : "
	// 	<< exact_k_chars(s2, k) << endl;
}
