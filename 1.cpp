#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    map<int, int> freq;
    vector<int> t;

    for (int i = 0; i < n; ++i) {
        if (freq[s[i]] < k) {
            t.push_back(s[i]);
            freq[s[i]]++;
        }
    }

    for (int i = 0; i < k; ++i) {
        cout << t[i] << " ";
    }
    cout << endl;

    return 0;
}
