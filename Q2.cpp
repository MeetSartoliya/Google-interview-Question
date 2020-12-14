// C++ program to count number of strings
// of n characters with
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// n is total number of characters.
// bCount and cCount are counts of 'b'
// and 'c' respectively.
int countStr(int n, int bCount, int cCount)
{
	// Base cases
	if (bCount < 0 || cCount < 0) return 0;
	if (n == 0) return 1;
	if (bCount == 0 && cCount == 0) return 1;

	// Three cases, we choose, a or b or c
	// In all three cases n decreases by 1.
	int res = countStr(n-1, bCount, cCount);
	res += countStr(n-1, bCount-1, cCount);
	res += countStr(n-1, bCount, cCount-1);

	return res;
}

// Driver code
int main()
{
	int n;// Total number of characters
	cout<<"Enter how many char u want in a group: ";
	cin>>n;
	cout << countStr(n, 1, 2);
	return 0;
}
