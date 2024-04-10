#include <iostream>
using namespace std;

int main() {
    string t;
    
    // take string input
    cin >> t;

    int b = t.length();
    string l = "";

    for(int i = 0; i < b; i++) {
        int x = t[i] - '0';  // convert char to int
        if(i == 0 && x == 9) {
            l += t[i];  // keep the first digit as is if it's 9
        }
        else {
            int n = 9 - x;
            l += to_string(min(x, n));  // take the smaller of the original and inverted digits
        }
    }

    cout << l << endl;

    return 0;
}
