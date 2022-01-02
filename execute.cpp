// Main program for assignment 4 - Memory Management
//
// This program will be run as follows:
//
// run_memory <algo> <memory_size> <input_file>
//    Where <algo> will be either "first_fit" or "best_fit", and
//          <size> is the number of bytes of memory to allocate
//          <input_file> contains a set of instructions


#include "memory_manager_base.h"
#include "memory_manager_first_fit.h"
#include "memory_manager_best_fit.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char ** argv)
{
    MemoryManagerBase * memory;   // Memory Manager that will be used 
    string algorithm;             // String choosing which memory manager to use
    int memory_size;              // Amount of memory to allocate

    // TODO: Process the command line arguments and populate the associated 
    //       variables. Validate that the algorithm is one of the supported 
    //       values and that the memory_size argument is > 0
    

    
    // Allocate a memory manager based on the
    // chosen algorithm.
    if (algorithm == "first_fit") {
        memory = (MemoryManagerBase *) new MemoryManagerFirstFit(memory_size);
    } else if (algorithm == "best_fit") {
        memory = (MemoryManagerBase *) new MemoryManagerBestFit(memory_size);
    } 

    // Print the initial memory setup
    memory->print();
    
    // Open the input file. 
    ifstream in(argv[3]);
    if (! in.good()) {
        cerr << "Failed to open file " << argv[3] << endl;
        return(6);
    }   

    while(in.good()) {
        // Process the input file one line at a time.


        // TODO: Read in the input line and take the action
        //       indicated on each line

        // Print the current memory layout after each action is complete
        memory->print();
        cout << endl;
    
    }


    return 0;
}