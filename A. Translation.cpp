#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main()
{
	string s1,s2;
	cin >> s1>>s2;

	reverse(s2.begin(), s2.end());
	if (s1 == s2) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	

	
	return 0;
}
