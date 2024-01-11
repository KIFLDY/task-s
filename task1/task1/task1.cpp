#include <iostream>
using namespace std;

int next_i(int i, int n, int m) {
    return 1 + (i + m - 2) % n;
}

int main() {
    int n, m;
    cin >> n >> m;
    int i = 1;
    while (true) {
        cout << i << " ";
        i = next_i(i, n, m);
        if (i == 1) {
            break;
        }
    }
    cout << endl;
    return 0;
}
