#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double round (double x){
    double factor = 6000000.0;
    int a = (int)(x * factor);
    return (double)a / factor;
}

void test_case(){
	double n;
	cin >> n;
	double t = 0.0;
	for (int i = 0; i < (int)n;i++){
		double x;
		cin >> x;
		t += (x/n);
	}
	cout << t;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	test_case();
}
