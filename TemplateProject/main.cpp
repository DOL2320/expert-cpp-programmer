// import libraries
#include <iostream>
#include <compare>
#include <map>
#include <vector>

using namespace std;

int sum(int x, int y)
{
    int result = x + y;
    return result;
}

int main(int argc, char **argv)
{
    int cansPerPack {6};
    auto cansPerCase = 12;

    cout << "A six-pack plus a twelve-pack is an " << sum(cansPerPack, cansPerCase) << "-pack." << endl;
    cout << "The sum of 492 and 314 is " << sum(492, 314) << endl;

    return 0;
}