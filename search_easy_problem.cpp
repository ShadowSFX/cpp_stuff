#include <bits/stdc++.h>
using namespace std;

void test_case(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1){
            cout << "HARD";
            return;
        }
    }
    cout <<"EASY";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	test_case();
}
