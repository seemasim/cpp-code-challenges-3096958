// C++ Code Challenges, LinkedIn Learning

// Challenge #2: Sorting an Array
// Sort the elements in an array in ascending order.
// Implement the algorithm of your choice.
// Don't use STL vectors.
// Don't use a sorting function from a library.

#include <iostream>
using namespace std;
// sort_array() using quicksort algorithm
// Summary: This function receives an array of integers and sorts it in ascending order.
// Arguments:
//           arr: A pointer acting as the array to sort.
//           n: The size of the array.
// Returns: A boolean value: True on success, false otherwise.
int partition(int *arr, int low, int hi){
    int pi = arr[hi];
    int i = (low-1);
    for(int j=low;j<=(hi-1);j++){
        if(arr[j]<pi){
            i++;
            //swap arr[i] and arr[j]
            swap(arr[i],arr[j]);
        }        
    }
    //swap arr[i+1] and arr[hi]
    swap(arr[i+1],arr[hi]);
    return (i+1);
}

void sort_array(int *arr, int low, int hi){

    // Write your code here
    if(low<hi){
        int pi=partition(arr,low,hi);
        sort_array(arr,low,pi-1);
        sort_array(arr,pi+1,hi);
    }
    
}


// Main function
int main(){
    // The following array will be treated as an array of length len. 
    const int len = 7; // Don't exceed the length of the array below!
    int array[] = {2, 9, 4, 3, 5, 1, 6, 8, 0, 7};

    // Print the original array
    std::cout << "Original Array: [ ";
    for (int i = 0; i < len; i++)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl << std::endl << std::flush;

    sort_array(array, 0, 6); // Sort the array

    // Print the sorted array
    std::cout << "  Sorted Array: [ ";
    for (int i = 0; i < len; i++)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl << std::endl << std::flush;

    return 0;
}
