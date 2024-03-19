#include "bits/stdc++.h"
 int main(){
    vector<int> v = {6,2,6,5,1,2};
    sort(v.begin(), v.end());
        vector<pair<int, int>> pairs;


     for (size_t i = 0; i < v.size(); i += 2) {
        // Ensure there's a pair of elements to form
        if (i + 1 < v.size()) {
            pairs.push_back(make_pair(v[i], v[i + 1]));
        }
    }

    // Display the pairs
    cout << "Pairs from the given vector:" << endl;
    for (const auto& pair : pairs) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }

    return 0;
}

 