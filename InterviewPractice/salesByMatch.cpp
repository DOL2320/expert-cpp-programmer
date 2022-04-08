// import libraries
#include <iostream>
#include <compare>
#include <map>
#include <vector>

using namespace std;

/*

*/

int main(int argc, char **argv)
{
    vector<int> ar = {10, 10, 20, 20, 20, 10, 10, 20, 20, 20};
    int noOfPairs = 0;
    map<int, int> socks;

    for (auto key : ar)
    {
        // int key = ar[i];
        if (socks.find(key) == socks.end())
            socks[key] = 0;
        socks[key]++;
    }

    for (const auto &elem : socks)
    {
        if ( elem.second > 1) {
            noOfPairs += elem.second / 2;
        }
        cout << elem.first << " " << elem.second << endl;
    }

    cout << noOfPairs << endl;

    return 0;
}