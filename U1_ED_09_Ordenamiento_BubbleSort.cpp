 #include <iostream>
using namespace std;


void bubbleSort(int arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {

                int temporal = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temporal;
            }
        }
    }
}

int main() {
    int arr[] = {6, 42, 9, 99, 69, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Arreglo original: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
