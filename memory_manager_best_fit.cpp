#include "memory_manager_best_fit.h"
#include <string>

using namespace std;

MemoryManagerBestFit::MemoryManagerBestFit(int size)
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
// Find the unallocated block that has the best fit
// for the number of bytes being allocated.
int MemoryManagerBestFit::allocate(int size, string name) 
{
    // TODO: Implement the allocate logic as follows:
    //
    //       Find the smallest unallocated block that is at least
    //       as big as the number of bytes to be implemented.
    //
    //       If the block to be assigned is exactly the same size as
    //       the amount needed, set its data values to indicate that it
    //       is assigned.
    //
    //       If the block to be assigned is bigger than the number of bytes
    //       needed, split the block, leaving one block exactly the same size
    //       as needed, and a second block with the rest of the original.
    //       Add the new remainder block to the list of blocks.
    //
    //       Return the location of the block that was allocated.
    //       If no suitable location can be found to store the new block,
    //       return -1


}


// Release memory
bool MemoryManagerBestFit::release(string name) 
{
    // TODO: Implement the "release" logic as follows:
    //
    //       Find the block with the indicated name
    //
    //       Change the name of the block to "" to indicate that it is not allocated.
    //
    //       Return true if the block was released, or false otherwise
}



