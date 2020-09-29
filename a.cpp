#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll BigSumEvens(ll n){
	ll n2 = (n % 2 == 1 ? n-1 : n);
	return (n2*(n2+2))/4;
}

ll BigSumOdds(ll n){
	return pow((n/2) + (n % 2 == 0 ? 0 : 1), 2);
}

ll SumProg(ll terms, ll initi, ll end){
	return (terms * (initi + end))/2;
}

void test_case(){
	ll n;
	cin >> n;
	ll np1 = 0;
	if (n > 1000000000){
		np1 = n/2;
	}else
		np1 = n;

	ll end_e1, end_o1;
	end_e1 = np1 - (n % 2 == 0 ? 0 : 1);
	end_o1 = np1 - (n % 2 == 0 ? 1 : 0);
	int eterms = np1/2;
	int oterms = np1/2 + (n % 2 == 0 ? 0 : 1);
	


	cout << SumProg(eterms, 2, end_e1) - SumProg(oterms, 1, end_o1);

	//cout << BigSumEvens(np1) + BigSumEvens(np2) - BigSumOdds(np1) - BigSumOdds(np2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	test_case();
}
