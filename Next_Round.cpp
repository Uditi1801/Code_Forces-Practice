#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k, sym = 0;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0 ; i < n ; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		if (a[i] >= a[k-1] && a[i] != 0){
			sym++;
		}
	}
	cout << sym;
}
