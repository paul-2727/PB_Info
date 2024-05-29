#include <fstream>

using namespace std;

ifstream cin("bomboane.in");
ofstream cout("bomboane.out");

const int MAX_N = 1001;

int n, a[MAX_N], rez[MAX_N][3], sum, mini, maxi, imin, imax, ind;

void distributeCandies() {
    int ok = 1;
    while (ok) {
        mini = INT_MAX;
        maxi = INT_MIN;
        for (int i = 1; i <= n; i++) {
            if (mini > a[i]) {
                mini = a[i];
                imin = i;
            }
            if (maxi < a[i]) {
                maxi = a[i];
                imax = i;
            }
        }
        if (mini == maxi)
            ok = 0;
        else {
            rez[++ind][0] = imax;
            rez[ind][1] = imin;
            rez[ind][2] = sum - mini;
            a[imin] = sum;
            a[imax] = maxi - (sum - mini);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i], sum += a[i];

    if (sum % n)
        cout << -1;
    else {
        sum /= n;
        distributeCandies();
        cout << ind << '\n';
        for (int i = 1; i <= ind; i++) {
            for (int j = 0; j < 3; j++)
                cout << rez[i][j] << ' ';
            cout << '\n';
        }
    }

    return 0;
}
