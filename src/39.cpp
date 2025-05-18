#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    // Read elements from input until EOF (End Of File)
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Display the array
    cout << "Array: ";
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            cout << arr[i] << " ";
        } else {
            cout << arr[i] << ", "; 
        }
    }
    
    return 0;
}
