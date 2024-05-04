#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // setup
    int x, t;           // x and delta t
    int v_h, v_g;       // velocity

    // read
    cin >> x >> t >> v_h >> v_g;

    // calculations
    double dist_g = pow(1000000 + x * x, 0.5);
    double dist_h = 1000;

    double t_h = dist_h / v_h;
    double t_g = dist_g / v_g;

    // shot first
    if (t - (t_g - t_h) > 0)
    {
        cout << "Han" << endl;
    }
    else
    {
        cout << "Greedo" << endl;
    }
}