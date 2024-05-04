#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    // setup
    int n;
    int w, h;

    // read in
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> w >> h;
        v[i] = make_pair(w, h);
    }

    // bound
    double theo_max = 0;
    for (auto p : v)
        theo_max += p.first * p.second;
    
    int bound = 0;
}