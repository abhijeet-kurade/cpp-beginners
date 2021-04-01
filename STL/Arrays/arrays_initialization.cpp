#include <bits/stdc++.h>
using namespace std;

int main() {		
	
	//Declaration 1
	// as arrayis local it does not get initialized. 
	//All 5 variables of array contains garbage value
	int a[5] ; 
/*
	for (int i=0; i<5; i++)
		cout<<a[i]<<endl;   
*/

	//Declaration & initialization
	// all values in array will be initialized to zero
	int a1[5] ={};
/*
	for (int i=0; i<5; i++)
		cout<<a1[i]<<endl;   
*/

	// First two value of array will be set to 2 and 3 and remaining ill be 0
	int a2[5]={2,3};
/*	
	for (int i=0; i<5; i++)
		cout<<a2[i]<<endl; 
*/
	
}
