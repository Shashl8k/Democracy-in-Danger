#include <climits>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    int K;

    cin >> K;

    const int  kN{ K };

    std::vector<int> groups(K);

    for (int i{ 0 }; i < K; i++)
    {
        cin >> groups[i];

    }
    sort(groups.begin(), groups.end());

    int min_n_groups{ int(K / 2) + 1 };

    int min_n_voters{ 0 };

    for (int i{ 0 }; i < min_n_groups; i++)
    {
        min_n_voters += int(groups[i] / 2) + 1;
    }

    cout << min_n_voters;

    return 0;