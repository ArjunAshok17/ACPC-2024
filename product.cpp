#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // setup
    int N;
    cin >> N;

    // read + product
    long long n1, n2;
    for (int i = 0; i < N; i++)
    {
        cin >> n1 >> n2;
        cout << (n1 * n2) << "\n";
    }
}