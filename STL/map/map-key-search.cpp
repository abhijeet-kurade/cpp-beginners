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

	if(mp.find(23) != mp.end())
		cout<<"Key is present"<<endl;
	else
		cout<<"Key is not present"<<endl;


	

	if(mp.find(3) != mp.end())
		cout<<"Key is present"<<endl;
	else
		cout<<"Key is not present"<<endl;




}
