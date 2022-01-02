#include "memory_manager_first_fit.h"
#include <string>

using namespace std;

MemoryManagerFirstFit::MemoryManagerFirstFit(int size)
{
    // Set up the list of memory blocks with the info for this initial
    // unallocated block.
    memory_block b;
    
    // TODO: Fill in the appropriate values here based on the data elements
    //       you added in the header file.


    // Add the block to the list of blocks
    m_blocks.push_back(b);
}


// Allocate a block of memory of the given size
// We will walk through our current list of blocks and 
// find the block with the first fit.
int MemoryManagerFirstFit::allocate(int size, string name) 
{
    // TODO: Implement the allocate logic here
    //
    //       Iterate through the current list of blocks
    //       and find the first one that is big enough to
    //       hold the desired number of bytes


	
    //       If the block to be assigned is exactly the same size as
    //       the amount needed, set its data values to indicate that it
    //       is assigned.


    //       If the block to be assigned is bigger than the number of bytes
    //       needed, split the block, leaving one block exactly the same size
    //       as needed, and a second block with the rest of the original.
    //       Add the new remainder block to the list of blocks.


    //       Return the location of the block that was allocated.
    //       If no block could be allocated, return -1

}


// Release memory
bool MemoryManagerFirstFit::release(string name) 
{
    // TODO: Implement the release logic as follows:
    //
    //       Find the block with the indicated name.
    //
    //       Change the name of the block to "" to indicate that it is empty.
    //
    //       Return true if the block was successfully released, and false otherwise
}




