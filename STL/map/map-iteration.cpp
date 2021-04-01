#include <bits/stdc++.h>
using namespace std;

int main() {		

	// declaration of map

	map<int, string> mp;

	mp[1] = "string1";	
	mp[2] = "string2";
	mp.insert({4,"string3"});
	mp.insert(pair<int, string>(6, "string5")); // this will not overwrite value for key 1
	mp[2] = "string6"; // this will overwrite value for key 2
	mp[7] = "string7";
	mp[3] = "string28";
	mp[20] = "string23";

	for(auto it : mp)
		cout<< it.first << " - " << it.second<<endl;

	cout<<endl;

	for(auto it = mp.begin(); it != mp.end(); it++)
		cout<< it->first << " - " << it->second<<endl;



}
