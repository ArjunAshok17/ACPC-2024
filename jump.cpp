#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // setup
    int N;
    cin >> N;


    // read + product
    int n1 = 0, n2 = 0;
    int max_diff = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        cin >> n2;
        max_diff = max(max_diff, n2 - n1);
        n1 = n2;
    }

    cout << max_diff << endl;
}