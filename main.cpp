#include <iostream>

using namespace std;


int countTwos(int n) {
    int binCount = 1;
    int result = 0;
    n = n>>1;
    while (n>0) {
        if (n & 1 == 1) {
            result += binCount;
        }
        binCount *= 2;
        n = n >> 1;
    }
    return result;
}

//Count the number of multiples of 2 between 0 and n
int main() {
    int n = 4;
    int result = countTwos(n);
    cout << result << endl;
    return 0;
}