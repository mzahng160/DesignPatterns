#include "policymode.h"

int main()  
{
	//enum RA {LRU, FIFO, RANDOM}; this is in head(.h) file
    Cache cache(RANDOM); //指定标签即可  
    cache.Replace();  
    return 0;  
} 