#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(const vector<vector<int>>& g) {
    int n = g.size();
    vector<vector<int>> r(n, vector<int>(n));
    for (int x = 0;x<n;x++) {
        for (int y = 0;y < n; y++) {
            r[x][y] = g[n - 1 - y][x];
        }
    }
    return r;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> r(n, vector<int>(n));
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            cin >> r[x][y];
        }
    }
    vector<vector<int>> g = rotate(r);
    for (const auto& row : g) {
        for (int height : row) {
            cout << height << " ";
        }
        cout << endl;
    }
}