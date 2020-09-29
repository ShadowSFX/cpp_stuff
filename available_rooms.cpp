#include <bits/stdc++.h>
using namespace std;

void test_case(){
    int n;
    cin >> n;

    int r = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (b - a >= 2)
            r++;
    }
    cout << r;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	test_case();
}
