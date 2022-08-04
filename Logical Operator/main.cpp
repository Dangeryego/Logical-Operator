#include <iostream>

using namespace std;

int main()
{
    const int upper {20}, lower{10};
    cout << "The bounds are {" << upper << " ....15.... " << lower << "}" << endl;
    cout << "Enter an Integer in between the bounds (Excluding the upper & lower limit) ";
    int num {};
    cin >> num;
    cout << boolalpha;
    bool within_bounds{};
    within_bounds = (num > lower && num < upper);
    cout << num <<" is between " << lower << " and " << upper << ": " << within_bounds << endl;

    return 0;
}
