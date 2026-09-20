//Q1. Bubble Sort

//Display the array before sorting and after each pass.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Before sorting: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }

        cout << "Pass " << i + 1 << ": ";

        for (int k = 0; k < n; k++)
            cout << a[k] << " ";

        cout << endl;

        if (!swapped)
            break;
    }

    return 0;
}
//Q2. Bubble Sort (Descending)
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
//Q3. Insertion Sort (Ascending)

//Display the array after each insertion.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;

        cout << "Pass " << i << ": ";

        for (int k = 0; k < n; k++)
            cout << a[k] << " ";

        cout << endl;
    }

    return 0;
}
//Q4. Selection Sort (Ascending)

//Display the minimum element selected in each pass.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex])
                minIndex = j;
        }

        cout << "Minimum selected: " << a[minIndex] << endl;

        swap(a[i], a[minIndex]);
    }

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
//Q5. Merge Sort

//Use separate functions for Merge Sort and Merge operations.

#include <iostream>
using namespace std;

void mergeArray(int a[], int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = 0;

    int temp[high - low + 1];

    while (i <= mid && j <= high) {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low, k = 0; i <= high; i++, k++)
        a[i] = temp[k];
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        mergeArray(a, low, mid, high);
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}




//Q6. Quick Sort (Last Element as Pivot)
#include <iostream>
using namespace std;

int partitionArray(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int p = partitionArray(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
//Q7. Quick Sort Display Array After Each Partition
#include <iostream>
using namespace std;

void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int partitionArray(int a[], int low, int high, int n) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);

    cout << "After partition: ";
    display(a, n);

    return i + 1;
}

void quickSort(int a[], int low, int high, int n) {
    if (low < high) {
        int p = partitionArray(a, low, high, n);

        quickSort(a, low, p - 1, n);
        quickSort(a, p + 1, high, n);
    }
}

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1, n);

    cout << "Final sorted array: ";
    display(a, n);

    return 0;
}
//Q8. Implement All Five Sorting Algorithms
#include <iostream>
using namespace std;

void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex])
                minIndex = j;
        }

        swap(a[i], a[minIndex]);
    }
}

void mergeArray(int a[], int low, int mid, int high) {
    int temp[100];
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low; i <= high; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        mergeArray(a, low, mid, high);
    }
}

int partitionArray(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int p = partitionArray(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    int a[n], b[n], c[n], d[n], e[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
        d[i] = a[i];
        e[i] = a[i];
    }

    bubbleSort(a, n);
    insertionSort(b, n);
    selectionSort(c, n);
    mergeSort(d, 0, n - 1);
    quickSort(e, 0, n - 1);

    cout << "Bubble Sort: ";
    display(a, n);

    cout << "Insertion Sort: ";
    display(b, n);

    cout << "Selection Sort: ";
    display(c, n);

    cout << "Merge Sort: ";
    display(d, n);

    cout << "Quick Sort: ";
    display(e, n);

    return 0;
}
//Q9. Compare Comparisons and Swaps
#include <iostream>
using namespace std;

void bubbleSort(int a[], int n, int &comparisons, int &swaps) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;

            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swaps++;
            }
        }
    }
}

void insertionSort(int a[], int n, int &comparisons, int &swaps) {
    for (int i = 1; i < n; i++) {
        int j = i;

        while (j > 0) {
            comparisons++;

            if (a[j - 1] > a[j]) {
                swap(a[j - 1], a[j]);
                swaps++;
                j--;
            } else {
                break;
            }
        }
    }
}

void selectionSort(int a[], int n, int &comparisons, int &swaps) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            comparisons++;

            if (a[j] < a[minIndex])
                minIndex = j;
        }

        if (minIndex != i) {
            swap(a[i], a[minIndex]);
            swaps++;
        }
    }
}

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    int a[n], b[n], c[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
    }

    int c1 = 0, s1 = 0;
    int c2 = 0, s2 = 0;
    int c3 = 0, s3 = 0;

    bubbleSort(a, n, c1, s1);
    insertionSort(b, n, c2, s2);
    selectionSort(c, n, c3, s3);

    cout << "\nBubble Sort";
    cout << "\nComparisons: " << c1;
    cout << "\nSwaps: " << s1;

    cout << "\n\nInsertion Sort";
    cout << "\nComparisons: " << c2;
    cout << "\nSwaps: " << s2;

    cout << "\n\nSelection Sort";
    cout << "\nComparisons: " << c3;
    cout << "\nSwaps: " << s3;

    return 0;
}
//Q10. Compare Merge Sort and Quick Sort Complexity
#include <iostream>
using namespace std;

int main() {
    cout << "Merge Sort Complexity\n";
    cout << "Best Case: O(n log n)\n";
    cout << "Average Case: O(n log n)\n";
    cout << "Worst Case: O(n log n)\n";
    cout << "Space Complexity: O(n)\n";

    cout << "\nQuick Sort Complexity\n";
    cout << "Best Case: O(n log n)\n";
    cout << "Average Case: O(n log n)\n";
    cout << "Worst Case: O(n^2)\n";
    cout << "Space Complexity: O(log n) average\n";

    return 0;
}
//Q11. Menu-Driven Sorting Program
#include <iostream>
using namespace std;

void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex])
                minIndex = j;
        }

        swap(a[i], a[minIndex]);
    }
}

void mergeArray(int a[], int low, int mid, int high) {
    int temp[100];
    int i = low, j = mid + 1, k = low;

    while (i <= mid && j <= high) {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low; i <= high; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        mergeArray(a, low, mid, high);
    }
}

int partitionArray(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int p = partitionArray(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main() {
    int n, choice;

    cout << "Enter size: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "\n1. Bubble Sort";
    cout << "\n2. Insertion Sort";
    cout << "\n3. Selection Sort";
    cout << "\n4. Merge Sort";
    cout << "\n5. Quick Sort";

    cout << "\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            bubbleSort(a, n);
            break;

        case 2:
            insertionSort(a, n);
            break;

        case 3:
            selectionSort(a, n);
            break;

        case 4:
            mergeSort(a, 0, n - 1);
            break;

        case 5:
            quickSort(a, 0, n - 1);
            break;

        default:
            cout << "Invalid choice";
            return 0;
    }

    cout << "Sorted array: ";
    display(a, n);

    return 0;
}
//Q12. Sort in Ascending and Descending Order
#include <iostream>
using namespace std;

void bubbleSort(int a[], int n, bool ascending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ascending && a[j] > a[j + 1])
                swap(a[j], a[j + 1]);

            if (!ascending && a[j] < a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bubbleSort(a, n, true);

    cout << "Ascending order: ";
    display(a, n);

    bubbleSort(a, n, false);

    cout << "Descending order: ";
    display(a, n);

    return 0;
}
//Q13. Count Comparisons in Sorting Algorithms
#include <iostream>
using namespace std;

int bubbleComparisons(int a[], int n) {
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            count++;

            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }

    return count;
}

int insertionComparisons(int a[], int n) {
    int count = 0;

    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0) {
            count++;

            if (a[j] > key) {
                a[j + 1] = a[j];
                j--;
            } else {
                break;
            }
        }

        a[j + 1] = key;
    }

    return count;
}

int selectionComparisons(int a[], int n) {
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            count++;

            if (a[j] < a[minIndex])
                minIndex = j;
        }

        swap(a[i], a[minIndex]);
    }

    return count;
}

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    int a[n], b[n], c[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
    }

    cout << "\nBubble Sort Comparisons: ";
    cout << bubbleComparisons(a, n);

    cout << "\nInsertion Sort Comparisons: ";
    cout << insertionComparisons(b, n);

    cout << "\nSelection Sort Comparisons: ";
    cout << selectionComparisons(c, n);

    return 0;
}
//Q14. Best Case of Bubble Sort and Insertion Sort
#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
    int comparisons = 0;

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;

            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    cout << "Bubble Sort Comparisons: " << comparisons << endl;
}

void insertionSort(int a[], int n) {
    int comparisons = 0;

    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0) {
            comparisons++;

            if (a[j] > key) {
                a[j + 1] = a[j];
                j--;
            } else {
                break;
            }
        }

        a[j + 1] = key;
    }

    cout << "Insertion Sort Comparisons: " << comparisons << endl;
}

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    int a[n], b[n];

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    bubbleSort(a, n);
    insertionSort(b, n);

    return 0;
}
//Q15. Quick Sort Pivot Effect
#include <iostream>
using namespace std;

int comparisons = 0;

int partitionArray(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        comparisons++;

        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);

    return i + 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int p = partitionArray(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    cout << "Sorted array: ";
    display(a, n);

    cout << "Total comparisons: " << comparisons << endl;

    return 0;
}