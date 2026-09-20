// FORMULA :-



//<<<<<<<==============================================================================>>>>>>>>>>>>>

//<<<<<<((((     ADDRESS = Base + ( size - 1 ) * Bytes     ))))>>>>>>]]

//<<<<<<<==============================================================================>>>>>>>>>>>>>





#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"enter no. ";
    cin>>a;
    cin>>b;
    cout<<"sum "<<a+b;
    return 0;
}

//===========--------=========================>>>>>>>

#include <iostream>
using namespace std;
int main() {
    int arr[5]={30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
cout<<arr[i]<<endl;
}
    return 0;
}


//===========-------========>>>

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of array ";
    cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"enter element of the array: ";
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    cout<< " "<<arr[i]<<endl;
}
    return 0;
}





//QUESTIONS:- 


//Q.1. cal the maximum value and minimum value out of all the elements in the array.  input: arr[]=(1,5,8,4,9,7,6,2,3)  output: 9 and 1

#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 5, 8, 4, 9, 7, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;
    return 0;
}





//Q.2. sum of all the elements in the array.  input: arr[ ] ={1,2,3,4,5}  output: 15

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    return 0;
}




//Q.3. SEARCH the given element X in the array. if present then return the index else return -1.
     Input: arr[] = {1,5,6,7,9,2,4,8}  X : 6  Output:2

    #include <iostream>
    using namespace std;
    int main(){  
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int x;
        cin>>x;
        int index = -1;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                index = i;
                break;
            }
        }
        cout<<index<<endl;
        return 0;
    }




//Q.4. Count the number of Occurrences of a particular element X.
     Input:arr[] ={3,5,8,3,2,1,4,3,6,3,3,5,2,1,7,2}  X: 3  Output: 5
 
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
    

    

//===========----------------=================>>>>>>> 

//Q.1. Reverse of an array input={1,2,3,4,5} Output={5,4,3,2,1}

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}


//Q.2.Find two elements in array whose sum equals a given target. Input={2,7,11,15,18} , target =17  Output= 7+11=17

  #include <iostream>
  using namespace std;
  int main() {
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      int target;
      cin>>target;
      bool found = false;
      for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
              if(arr[i]+arr[j]==target){
                  cout<<arr[i]<<" + "<<arr[j]<<" = "<<target<<endl;
                  found = true;
              }
          }
      }
      if(!found){
          cout<<"No pair found"<<endl;
      }
      return 0;
  }
     

//Q.4. Find duplicate elements in an array. Input={ 1,2,3,4,5,2,1,6,1,5,3}  Output= {1,2,3}

 #include <iostream>
  using namespace std;
  int main() {
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      cout<<"Duplicate elements are: ";
      for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
              if(arr[i]==arr[j]){
                  cout<<arr[i]<<" ";
                  break;
              }
          }
      }
      return 0;
  }

//----------------------------------------------------------->>>>>>>>>

#include <iostream>
using namespace std;
int main() {
     int arr[]={10,20,30,40,50};
     int n = sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++){
         cout<<" i "<<i<<" "<<endl;
         cout<<"arr"<<arr[i]<<" "<<endl;
     }
}


  //  WRITE A C++ PROGRAM TO IMPLEMENT LINEAR SEARCH ON AN ARRAY. dISPLAY 



  #include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

  //  BINARY SEARCH

#include <iostream>
using namespace std;

int main() {
     arr[] ={20,30,40,50,60,70,80};
     int n = sizeof(arr)/sizeof(arr[0]);
     int key =90;
     int low = 0;
     int high = n - 1;
     while{low<=high}{
          int mid = low + (high - low) / 2;
          if{arr[mid]==key}{
               cout<<key<<endl;
               return 0;

          }else if{arr[mid]<key}{
               low = mid + 1;
     }else{
          high = mid - 1;
     }
     }
     cout<<"not found"<<endl;
     return 0;
}


for swapping 
   
#include <iostream>
using namespace std;

int main() {
     int arr[]={ }
}








//============================================================================================>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

  //                  ============--- LABSHEET 2 -----------====================//



//. 1. Linear search ------->>>>>>>>>

#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> key;

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            cout << "Element found at position " << i + 1;
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}




  //  .2.  BINARY SEARCH

#include <iostream>
using namespace std;

int main() {
     arr[] ={20,30,40,50,60,70,80};
     int n = sizeof(arr)/sizeof(arr[0]);
     int key =90;
     int low = 0;
     int high = n - 1;
     while{low<=high}{
          int mid = low + (high - low) / 2;
          if{arr[mid]==key}{
               cout<<key<<endl;
               return 0;

          }else if{arr[mid]<key}{
               low = mid + 1;
     }else{
          high = mid - 1;
     }
     }
     cout<<"not found"<<endl;
     return 0;
}


  //  .3.  Compare Linear Search and Binary Search

#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> key;

    int linear = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            linear = i;
            break;
        }
    }

    int low = 0, high = n - 1;
    int binary = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == key) {
            binary = mid;
            break;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (linear != -1)
        cout << "Linear Search: Found at position " << linear + 1 << endl;
    else
        cout << "Linear Search: Not found" << endl;

    if (binary != -1)
        cout << "Binary Search: Found at position " << binary + 1;
    else
        cout << "Binary Search: Not found";

    return 0;
}



//Q4. Bubble Sort (Ascending)


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
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }

        for (int k = 0; k < n; k++)
            cout << a[k] << " ";

        cout << endl;
    }

    return 0;
}


//Q5. Bubble Sort (Descending)


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

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}


//Q6. Insertion Sort (Ascending)


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

        for (int k = 0; k < n; k++)
            cout << a[k] << " ";

        cout << endl;
    }

    return 0;
}



//Q7. Selection Sort (Ascending)


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

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}


//Q8. Merge Sort


#include <iostream>
using namespace std;

void mergeArray(int a[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = 0;
    int temp[high - low + 1];

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

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}



//Q9. Quick Sort (Last Element as Pivot)


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
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}



//Q10. Quick Sort (Display Array After Each Partition)


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

    for (int k = 0; k < high + 1; k++)
        cout << a[k] << " ";

    cout << endl;

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
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    return 0;
}


//Q11. Menu-Driven Linear and Binary Search
#include <iostream>
using namespace std;

int main() {
    int n, choice, key;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "1. Linear Search" << endl;
    cout << "2. Binary Search" << endl;

    cin >> choice;
    cin >> key;

    if (choice == 1) {
        for (int i = 0; i < n; i++) {
            if (a[i] == key) {
                cout << "Element found at position " << i + 1;
                return 0;
            }
        }

        cout << "Element not found";
    }
    else if (choice == 2) {
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (a[mid] == key) {
                cout << "Element found at position " << mid + 1;
                return 0;
            }
            else if (a[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }

        cout << "Element not found";
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}


//Q12. Menu-Driven Sorting


#include <iostream>
using namespace std;

int main() {
    int n, choice;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "1. Bubble Sort" << endl;
    cout << "2. Insertion Sort" << endl;
    cout << "3. Selection Sort" << endl;

    cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (a[j] > a[j + 1])
                    swap(a[j], a[j + 1]);
    }
    else if (choice == 2) {
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
    else if (choice == 3) {
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;

            for (int j = i + 1; j < n; j++)
                if (a[j] < a[minIndex])
                    minIndex = j;

            swap(a[i], a[minIndex]);
        }
    }
    else {
        cout << "Invalid choice";
        return 0;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}


//Q13. Merge Sort and Binary Search


#include <iostream>
using namespace std;

void mergeArray(int a[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = 0;
    int temp[high - low + 1];

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
    int n, key;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> key;

    mergeSort(a, 0, n - 1);

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == key) {
            cout << "Element found at position " << mid + 1;
            return 0;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Element not found";

    return 0;
}



//Q14. Compare Two Sorting Algorithms



#include <iostream>
using namespace std;

int bubbleSort(int a[], int n) {
    int comparisons = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;

            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }

    return comparisons;
}

int selectionSort(int a[], int n) {
    int comparisons = 0;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            comparisons++;

            if (a[j] < a[minIndex])
                minIndex = j;
        }

        swap(a[i], a[minIndex]);
    }

    return comparisons;
}

int main() {
    int n;
    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    cout << "Bubble Sort Comparisons: "
         << bubbleSort(a, n) << endl;

    cout << "Selection Sort Comparisons: "
         << selectionSort(b, n);

    return 0;
}





//Q15. Three Sorting Algorithms and Complexities



#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
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

        for (int j = i + 1; j < n; j++)
            if (a[j] < a[minIndex])
                minIndex = j;

        swap(a[i], a[minIndex]);
    }
}

int main() {
    int n;
    cin >> n;

    int a[n], b[n], c[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
    }

    bubbleSort(a, n);
    insertionSort(b, n);
    selectionSort(c, n);

    cout << "Bubble Sort: Best O(n), Average O(n^2), Worst O(n^2)" << endl;

    cout << "Insertion Sort: Best O(n), Average O(n^2), Worst O(n^2)" << endl;

    cout << "Selection Sort: Best O(n^2), Average O(n^2), Worst O(n^2)" << endl;

    return 0;

}