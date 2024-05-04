#include <iostream>
using namespace std;

long long gen_subsets(string&, string&, string, int, int, const int);

int main()
{
    // setup
    string base, droid;
    cin >> base >> droid;
    int l = base.length();
    
    // brute force
    int num_possible = gen_subsets(base, droid, "", 0, 0, droid.length(), false);
    cout << (num_possible % 1000000007) << endl;
}


long long gen_subsets(string& s, string& t, string cur, int counter, int index, const int limit, bool removed)
{
    // base case, if we've reached the limit of chars to add
    cout << cur << endl;
    if (cur.length() == limit)
    {
        return (t == cur) ? 1 : 0;
    }
    if (index >= s.length())
        return 0;
    
    // choose to append current char or not
    long long res1 = 0, res2 = 0;
    if (removed)
        res1 = gen_subsets(s, t, cur + s[index], counter + 1, index + 1, limit, false);
    res2 = gen_subsets(s, t, cur, counter, index + 1, limit);

    return res1 + res2;
}

