#include <iostream>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;

    // Compute day after N days, in the range 1..7
    int ans = (X + N) % 7;
    if (ans == 0) 
        ans = 7;

    cout << ans << "\n";
    return 0;
}
