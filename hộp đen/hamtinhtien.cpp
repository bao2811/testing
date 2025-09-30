#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <iomanip>
#include <cstdio>
#include <fstream>
#include <queue>
#include <algorithm>
#include <numeric>
#include <cstring>
#include <functional>
#define f first
#define s second
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define ll long long

using namespace std;

int a[(int) 1e6 + 11];

vector<int> giaDinh = {1500, 2000, 3000};
vector<int> doanhNghiep = {2000, 2500, 3500};

int tinhGiaTienDien(int X, int T) {
    if ((X < 0) || (T != 1 && T != 2)) {
        return -1;
    }
    vector<int> v = T == 1 ? giaDinh : doanhNghiep;

    int tien = 0;
    if (X <= 100) tien = X * v[0];
    else if (X <= 200) tien = 100 * v[0] + (X - 100) * v[1];
    else tien = 100 * v[0] + 100 * v[1] + (X - 200) * v[2];
    return tien;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int X, T; cin >> X >> T;
    int tien = tinhGiaTienDien(X, T);
    if (tien == -1)
        cout << "invalid";
    else cout << tien;

    return 0;
}