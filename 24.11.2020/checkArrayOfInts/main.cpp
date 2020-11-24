#include <iostream>
#include <string>
#include "utils/reader.h"

using namespace std;

int main() {
    int n;
    n = readInt("Enter count of arrays");
    cout << "Size: " << n << endl;

    int **arr = new int *[n];
    auto *sizes = new size_t[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = readIntArray("Enter int array", sizes[i]);
    }

    for (int i = 0; i < n; ++i) {
        bool descending = true;
        bool ascending = true;
        bool notSorted = true;

        for (int j = 0; j < sizes[i] - 1; ++j) {
            if (arr[i][j] > arr[i][j + 1]) {
                descending = false;
            }
            if (arr[i][j] < arr[i][j + 1]) {
                ascending = false;
            }
        }

        notSorted = !(descending || ascending);

        printf("descending: %d ascending: %d not sorted: %d\n", descending, ascending, notSorted);
    }
}


/* Read Int
int n;
n = readInt("Enter integer");
cout << "n: " << n << endl;
 */

/* Read Int Array
size_t size;
int *array;
array = readIntArray("Enter array of integers", size);
for (size_t i = 0; i < size; i++) {
    cout << array[i] << " ";
}
cout << endl;
 */

/* Read Double
double n;
n = readDouble("Enter double");
cout << "n: " << n << endl;
 */

/* Read Double Array
size_t size;
double *array;
array = readDoubleArray("Enter array of doubles", size);
for (size_t i = 0; i < size; i++) {
    cout << array[i] << " ";
}
cout << endl;
 */

/* Read String
string s;
cout << "Enter string" << endl;
getline(cin, s);
cout << s << endl;
 */

/* Read String
size_t size;
string *array;
array = readStringArray("Enter array of strings", size);
for (size_t i = 0; i < size; i++) {
    cout << array[i] << endl;
}
cout << endl;
 */