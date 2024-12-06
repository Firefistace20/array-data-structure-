#include<iostream>
#include<climits>

using namespace std;

/*int sec_max(int arr[], int n) {

it involves two separate loops over the array, making its time complexity:

O(n)+O(n)=O(2n)≈O(n)

    int max = INT_MIN;   // Declare and initialize `max`
    int sec_max = INT_MIN;

    // Find the largest element first
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Find the second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] != max) {  // Skip the maximum element
            if (arr[i] > sec_max) {
                sec_max = arr[i];
            }
        }
    }

    return sec_max;
}

*/
//Optimized Single-Pass Approach
//The logic can be adjusted to find the largest (max) and second largest (sec_max) elements in a single loop, as shown below:
int sec_max(int arr[], int n) {
    if (n < 2) {
        // If there are fewer than two elements, second largest does not exist
        return INT_MIN;
    }

   int max = INT_MIN;
    int sec_max = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            sec_max = max; // Update second largest
            max = arr[i];  // Update largest
        } else if (arr[i] > sec_max && arr[i] != max) {
            sec_max = arr[i]; // Update second largest if smaller than max
        }
    }
    cout << "Maximum element: " << max << endl;

    return sec_max;
    
}


int main() {
    int arr[] = {20,67,6,8 ,0,-7,99,67,67,-99,100,100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = sec_max(arr, n);

    cout << "Second largest: " << s << endl;

    return 0;
}
