#include <iostream>
#include <compare>

using namespace std;

int main() {
    auto result = (10 <=> 20) > 0;
    cout << result << endl;

    return 0;
}