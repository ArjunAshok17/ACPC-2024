#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // setup
    int N;
    cin >> N;

    // read + map
    unordered_map<string, int> kpop{};
    string group_name;
    int num_songs;

    for (int i = 0; i < N; i++)
    {
        cin >> group_name >> num_songs;
        kpop[group_name] = num_songs;
    }

    // get listener info
    int M;
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> group_name;
        kpop[group_name] -= 1;
    }

    // get groups
    for (const auto& p : kpop)
    {
        if (p.second > 0)
        {
            cout << p.first << endl;
            return 0;
        }
    }

    cout << "NO KPOP FOR VADER" << endl;
}