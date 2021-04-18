//
//  main.cpp
//  C++_Functions_Q3P1_AlanPowell
//
//  Created by Alanté Powell on 4/17/21.
//

#include <iostream> // Used output and string interpolation/appending
#include <time.h> // Used for clock_t and "execution_time"
using namespace std;

//    Populating array happens 3 times, creating seperate function
void populate_array(int array[], int array_size) {
    for(int i = 0; i < array_size; i++) {
        array[i] = rand();
    }
}

int main(int argc, const char * argv[]) {
//    Static Array setup
    int size_of_array = 100000; // Inititalized this to use in populating array
    int array[size_of_array];
    int *array_pointer = new int[size_of_array];
    
//    Execution time setup
    clock_t start_clock = clock();
    
//    Populate array
    populate_array(array, size_of_array);
    
//    Stop clock for execution time
    double total_execution_time = static_cast<double>(clock() - static_cast<double>(start_clock)/static_cast<double>(CLOCKS_PER_SEC));
    
//    Display execution time
    cout << "Array (on the stack) execution time is: " << total_execution_time << endl;
    
//    Heap execution time setup
    clock_t start_clock_2 = clock();
    
//    Populate array (on Heap)
    populate_array(array_pointer, size_of_array);
    
//    Stop clock for execution time
    double total_execution_time_2 = static_cast<double>(clock() - static_cast<double>(start_clock_2)/static_cast<double>(CLOCKS_PER_SEC));
    
//    Display execution time
    cout << "Array (on the heap) execution time is: " << total_execution_time_2 << endl;
}

// Explanation of results
// ----------------------
// According to the execution times recorded, declaring an array from the stack is
// *SLIGHTLY* faster than declaring an array from the heap. When I ran the program
// declaring an array of 100,000 values had an execution time of 354,946 when declaring
// the array from the stack. Declaring the same size array on the heap had an execution
// time of 355,793.
