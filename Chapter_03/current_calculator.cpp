// write a program that calculates the current through a 200-μF capacitor whose voltage is given;
//        ⎧  50t V          0 < t < 1
// v(t) = ⎪  100 - 50t V    1 < t < 3
//        ⎪  -200 + 50t V   3 < t < 4
//        ⎩  0 V            otherwise

// The program should prompt the user to enter time, t.
#include <iostream>
using namespace std;

int main() {
    double t;
    double C = 200e-6;   // 200 microfarads
    double current;

    cout << "Enter time t (seconds): ";
    cin >> t;

    if (t > 0 && t < 1) {
        current = C * 50;
    }
    else if (t > 1 && t < 3) {
        current = C * (-50);
    }
    else if (t > 3 && t < 4) {
        current = C * 50;
    }
    else {
        current = 0;
    }

    cout << "Current through the capacitor = "
         << current << " A" << endl;

    return 0;
}
