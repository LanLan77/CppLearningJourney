#include <iostream>
using namespace std;

int main(){
    int arr[] = {5,9,2,7,4,3,12,6,1,5,7};
    int arrlength = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < arrlength; i++) {
        for (int j = 0; j < arrlength -i -1; j++) {
            if (arr[j]> arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < arrlength; i++) {
        cout << arr[i] << "\t";
    }
}