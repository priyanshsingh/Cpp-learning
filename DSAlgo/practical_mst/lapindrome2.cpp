#include <bits/stdc++.h>

using namespace std;

bool lapinCheck(string s) {
	int L[1000] = {0};
	int R[1000] = {0};
	int n = s.size();
	for(int i = 0; i < n / 2; ++i) {
		L[s[i]-'a']++;
	}
	for(int i = (n + 1) / 2; i < n; ++i) {
		R[s[i]-'a']++;
	}
	bool ch = true;
	for(int i = 0; i < 26; ++i) {
		if(L[i] != R[i]) {
			ch = false;
		}
	}
	return ch;
}
void decode() {
	string s;
	cin >> s;
	if(lapinCheck(s)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}