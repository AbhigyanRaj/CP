#include <iostream>

using namespace std;

bool canDivideWatermelon(int w) {
    return w > 2 && w % 2 == 0;
}

int main() {
    int w;
    cin >> w;
    
    if (canDivideWatermelon(w)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
