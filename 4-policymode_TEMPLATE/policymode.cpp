#include "policymode.h"

int main()  
{
	// LRU_ReplaceAlgorithm, FIFO_ReplaceAlgorithm, Random_ReplaceAlgorithm
    Cache<FIFO_ReplaceAlgorithm> cache; //模板实参  
    cache.Replace();  
    return 0;  
}