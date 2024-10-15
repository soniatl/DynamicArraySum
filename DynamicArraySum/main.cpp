//
//  main.cpp
//  DynamicArraySum
//
//  Created by Sonia Lopchan on 10/14/24.
//
#include <iostream>

using namespace std;

int main(){
    
    int numbers; //initialize numbers to allocate elements
    cout <<"Enter the number of elements in an array" <<endl;
    cin >>numbers;//input the numbers
    
    int* arr = new int[numbers]; //dynamically allocate an array of integers
    
    cout << "Enter " << numbers << " elements: "; //ask user to enter the elements
    
    int i=0;
    while (i<numbers) { //loop iterates until i < numbers
        cin >> arr[i];//input element i=0, i.e. arr[0]
        i++;//increment by 1 until i<numbers
    }
    
    int sum = 0; //initialize sum to zero
    i=0;
    while (i<numbers) { //loop continues until i < numbers
        sum += arr[i]; //add the current value of elements and store in sum variable
        i++;
    }
    
    cout << "Sum of array elements: " << sum << endl;//prints sum of arrays
    delete[] arr; //deallocating array, i.e. empty heap memory
    
    
    return 0;//program ends
}

/*
Program Output
 
 Enter the number of elements in an array
 5
 Enter 5 elements: 1 2 3 4 5
 Sum of array elements: 15
 Program ended with exit code: 0
 
*/
