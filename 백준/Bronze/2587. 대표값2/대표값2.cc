#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int sum;
	vector<int> v(5);
	for (int &i : v) {
		cin >> i;
	}
    sort(v.begin(),v.end());
	sum = accumulate(v.begin(), v.end(), 0);
	cout << sum / 5 << "\n";
	cout << v[2];
}