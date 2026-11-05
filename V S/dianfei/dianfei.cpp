#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int usage;
    double cost = 0.0;
    cin >> usage;
    if (usage <= 150) {
        cost = usage * 0.4463;
    }
    else if (usage <= 400) {
        cost = 150 * 0.4463 + (usage - 150) * 0.4663;
    }
    else {
        cost = 150 * 0.4463 + 250 * 0.4663 + (usage - 400) * 0.5663;
    }
    cout << fixed << setprecision(1) << cost << endl;
    return 0;
} 
