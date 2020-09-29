#include <bits/stdc++.h>
using namespace std;

void test_case(){
    int n, h;
    cin >> n >> h;
    int w = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x > h)
            w += 2;
        else
            w++;
    }
    cout << w;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	test_case();
}
