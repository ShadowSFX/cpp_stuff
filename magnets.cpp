#include <bits/stdc++.h>
using namespace std;

void test_case(){
    int n, g=0, p=0;
    cin >> n;
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        if (p != x){
            p = x;
            g++;
        }
    }
    cout << g;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	test_case();
}
