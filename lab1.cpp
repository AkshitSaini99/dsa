// FORMULA :-



//<<<<<<<==============================================================================>>>>>>>>>>>>>

//<<<<<<((((     ADDRESS = Base + ( size - 1 ) * Bytes     ))))>>>>>>]]

//<<<<<<<==============================================================================>>>>>>>>>>>>>





// #include <iostream>
// using namespace std;
// int main() {
//     int a,b;
//     cout<<"enter no. ";
//     cin>>a;
//     cin>>b;
//     cout<<"sum "<<a+b;
//     return 0;
// }

//===========--------=========================>>>>>>>

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5]={30,40,50};
//     int n = sizeof(arr)/sizeof(arr[0]);
// for(int i=0;i<n;i++){
// cout<<arr[i]<<endl;
// }
//     return 0;
// }


//===========-------========>>>

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter size of array ";
//     cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cout<<"enter element of the array: ";
//     cin>>arr[i];
// }
// for(int i=0;i<n;i++){
//     cout<< " "<<arr[i]<<endl;
// }
//     return 0;
// }





// QUESTIONS:- 


// Q.1. cal the maximum value and minimum value out of all the elements in the array.  input: arr[]=(1,5,8,4,9,7,6,2,3)  output: 9 and 1

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1, 5, 8, 4, 9, 7, 6, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int max = arr[0];
//     int min = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     cout << "Maximum value: " << max << endl;
//     cout << "Minimum value: " << min << endl;
//     return 0;
// }




// Q.2. sum of all the elements in the array.  input: arr[ ] ={1,2,3,4,5}  output: 15

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin>>arr[i];
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     cout << "Sum: " << sum << endl;
//     return 0;
// }




// Q.3. SEARCH the given element X in the array. if present then return the index else return -1.
     //Input: arr[] = {1,5,6,7,9,2,4,8}  X : 6  Output:2

    // #include <iostream>
    // using namespace std;
    // int main(){  
    //     int n;
    //     cin>>n;
    //     int arr[n];
    //     for(int i=0;i<n;i++){
    //         cin>>arr[i];
    //     }
    //     int x;
    //     cin>>x;
    //     int index = -1;
    //     for(int i=0;i<n;i++){
    //         if(arr[i]==x){
    //             index = i;
    //             break;
    //         }
    //     }
    //     cout<<index<<endl;
    //     return 0;
    // }




// Q.4. Count the number of Occurrences of a particular element X.
     //Input:arr[] ={3,5,8,3,2,1,4,3,6,3,3,5,2,1,7,2}  X: 3  Output: 5
 
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cin>>x;
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             count++;
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }
    

    

//===========----------------=================>>>>>>> 

// Q.1. Reverse of an array input={1,2,3,4,5} Output={5,4,3,2,1}

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// Q.2.Find two elements in array whose sum equals a given target. Input={2,7,11,15,18} , target =17  Output= 7+11=17

  #include <iostream>
  using namespace std;
  int main() {
     

// Q.4. Find duplicate elements in an array. Input={ 1,2,3,4,5,2,1,6,1,5,3}  Output= {1,2,3}