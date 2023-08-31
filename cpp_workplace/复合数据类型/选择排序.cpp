#include <iostream>
using namespace std;

int main(){
    int arr[] = {5,9,2,7,4,3,12,6,1,5,7};
    //选择排序
    int arrlength = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < arrlength; i++) {
        for (int j = i+1; j < arrlength; j++){
            if(arr[j]< arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < arrlength; i++) {
        cout << arr[i] << "\t";
    }
}