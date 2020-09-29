#include <bits/stdc++.h>
using namespace std;

double round (double x){
    double factor = 6000000.0;
    int a = (int)(x * factor);
    return (double)a / factor;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    cin >> n;
    int arr[3] = {0, 0, 0};

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x > 0)
            arr[0]++;
        else if (x == 0)
            arr[1]++;
        else
            arr[2]++;
    }
    cout << round((double)arr[0]/(double)n) << "\n";
    cout << round((double)arr[2]/(double)n);
    cout << round((double)arr[1]/(double)n) << "\n";
}
