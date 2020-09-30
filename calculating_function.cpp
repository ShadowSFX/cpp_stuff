#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll SumProg(ll terms, ll initi, ll end){
	return (terms * (initi + end))/2;
}

void test_case(){
	ll n;
	cin >> n;

	int step = 10;
	ll x = step;
	ll res = 0;
	ll r1 = 1;
	ll r2 = x;
	do{
		if (x * step > n)
			r2 = n;

		// numbers in range
		ll nir = r2 - r1 + 1;

		// terms
		ll et = nir/2;
		ll ot = nir/2 + (r2 % 2 == 0 ? 0 : 1);

		// starts
		ll es = r1 + (r1 % 2 == 0 ? 0 : 1);
		ll os = r1 + (r1 % 2 == 0 ? 1 : 0);

		// endings
		ll ee = r2 - (r2 % 2 == 0 ? 0 : 1);
		ll oe = r2 - (r2 % 2 == 0 ? 1 : 0);
		
		res += (SumProg(et, es, ee) - SumProg(ot, os, oe));

		x *= step;
		r1 = r2 + 1;
		r2 = x;
	} while (x <= n);
	cout << res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	test_case();
}
