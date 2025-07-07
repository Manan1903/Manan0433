// Sum of elements, Input= 10,20,30,40 Output= 100 using array
#include <iostream>
using namespace std;  

int main() {
    int arr[4] = {10, 20, 30, 40};
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += arr[i];
    }
    cout << "Sum of elements: " << sum << endl;
    return 0;
}
