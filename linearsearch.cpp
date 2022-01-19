/* 
Objective: Search an un-ordered array of integer for a value, 
if the value is found return the index of its potiion in the array. If not found then return -1
*/

#include <iostream>
using namespace std;

int search(int arr[], int arrSize, int target) {
    // function is checking for the target number in the array
    int i;
    for(int i = 0; i < arrSize; i++)
        if (arr[i] == target)
            return i;
    return -1;
}

int main() {

    // initializing the variables for the function
    int myArray[] = {1,2,3,4,5};
    int myArraySize = sizeof(myArray)/sizeof(myArray[0]);
    int myNum = 6;

    // calling the function with the variables
    int result = search(myArray, myArraySize, myNum);

    // returning to terminal with corrisponding results
    if (result == -1)
        cout << "Returned result was " << result;
    else
        cout << "Element is in index position " << result;

    // exit the terminal/program
    return 0;
}