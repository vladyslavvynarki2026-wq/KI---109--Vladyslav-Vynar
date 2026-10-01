#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter three positive numbers: ";
    cin >> a >> b >> c;

    double geometricMean = cbrt(a * b * c);
    double fractionalPart = geometricMean - floor(geometricMean);

    cout << "Fractional part of geometric mean: "
        << fractionalPart << endl;

    return 0;
}