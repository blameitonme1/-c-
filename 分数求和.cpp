#include <bits/stdc++.h>
using namespace std;

int a[15]; 
int b[15]; 
int gcd(int a, int b) {
	return (b == 0 ? a : gcd(b, a % b));
}

int main() {
	int n;
	cin >> n;
	char c;
	int sumb = 1;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c >> b[i];
		sumb *= b[i];
	}
	int max = 1;
	for (int i = 0; i < n; i++) {
		max = gcd(max, b[i]);
	}
	int min = sumb / max;
	int fz = 0, fm;
	for (int i = 0; i < n; i++) {
		fz += (a[i] * (min / b[i]));
	}
	fm = min;
	int maxtemp = gcd(fz, fm);
	fz /= maxtemp;
	fm /= maxtemp;
	if (fm == 1)
		cout << fz;
	else
		cout << fz << "/" << fm;
	return 0;
}
