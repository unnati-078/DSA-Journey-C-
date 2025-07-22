/*
Search an element in an array
You are given an array A. A of size N and an element X. Your task is to find whether the array A contains the element X or not.

Input Format
The first line contains two space-separated integers N and X — the size of array and the element to be searched.
The second line contains all the elements of array A
Output Format
Output "YES" if the element 
X is present in A, otherwise output "NO".
*/

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
	int n;
	int target;
	cin>>n;
	int num[n];
	cin>>target;
	bool found = false;
	for (int i=0; i<n; i++){
	    cin>>num[i];
	}
	for (int i=0; i<n; i++) {
	    if(num[i]==target) {
	        found = true;
	        break;
	    }
	}
	if (found==true) {
	    cout<<"YES";
	} else {
	    cout<<"NO";
	}
	return 0;

}
