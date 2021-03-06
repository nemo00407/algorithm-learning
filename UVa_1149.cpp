#include <algorithm>
#include <iostream>
using namespace std;
#define _for(i, a, b) for(int i = (a); i < (b); i++) 
const int maxn = 1e5 + 8;
int n, l, len[maxn];
int solve() {
    cin >> n >> l;
    _for(i, 0, n) cin >> len[i];
    sort(len, len + n, greater<int>());
    int ans = 0, left = 0, right = n-1;
    while (left <= right) {
        ans++;
        left++;
        if (left != right && len[left] + len[right] <= l) right--;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    int T;
    cin >> T;
    _for(t, 0, T) {
        if (t) cout << endl;
        cout << solve() << endl;
    }
    return 0;
}