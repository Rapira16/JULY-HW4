#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num = 0;
    int sum = 0;
    vector<int> array {0, 1, 1, 2, 3, 3};
    
    for(int i = 0; i < 6; i++) {
        for(int j = i++; j < 6; j++) {
            if (array[i] != array[j]) {
                num ++;
            }
            if (num == 6) sum ++;
        }
    }
    cout << sum;
}