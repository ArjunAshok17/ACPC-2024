#include <iostream>
#include <set>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    // setup
    int a, b;
    cin >> a >> b;
    
    // factorize
    multiset<int> a_fac;
    multiset<int> b_fac;

    int upper_bound_a = floor(pow(a, 0.5));
    int upper_bound_b = floor(pow(b, 0.5));

    for (int i = 1; i <= upper_bound_a; i++)
    {
        if (a % i == 0)
        {
            a_fac.insert(i);
            a_fac.insert(a / i);
        }
    }
    for (int i = 1; i <= upper_bound_b; i++)
    {
        if (b % i == 0)
        {
            b_fac.insert(i);
            b_fac.insert(b / i);
        }
    }

    // get number
    multiset<int> difference;
    set_difference(a_fac.begin(), a_fac.end(), b_fac.begin(), b_fac.end(), inserter(difference, difference.begin()));
    cout << (difference.size()) << endl;
}

