#include <iostream>
using namespace std;

int main()
{
    // setup
    string b;
    int n;
    
    // check strings
    cin >> b;
    cin >> n;
    int len = b.length();
    string droid;

    // for every droid
    for (int i = 0; i < n; i++)
    {
        cin >> droid;
        int offset = 0;
        bool flag = true;

        // match relative order
// cout << droid << endl;
//         for (int j = 0; j < droid.length() && flag; j++)
//         {
//             // try match
// // cout << "    " << droid[j] << ' ' << b[j + offset] << endl;
//             while (j + offset < len && droid[j] != b[j + offset])
//             {
// // cout << '\t' << droid[j] << ' ' << b[j + offset] << endl;
//                 offset++;
//             }

//             // no match
//             if (j + offset == len && droid[j] != b[j + offset - 1])
//             {
//                 cout << "NO" << endl;
//                 flag = false;
//             }
//         }

//         // success
//         if (flag)
//             cout << "YES" << endl;

        flag = false;
        for (int j = 0, k = 0; j < len && !flag; j++)
        {
            if (b[j] == droid[k])
                k++;
            if (k == droid.length())
            {
                cout << "YES" << endl;
                flag = true;
            }
        }

        if (!flag)
            cout << "NO" << endl;
    }
}