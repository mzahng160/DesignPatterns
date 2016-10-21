#ifndef COMPILER_H_
#define COMPILER_H_

#include "scanner.h"		  
#include "parser.h"
#include "genmidcode.h"
#include "genmachinecode.h"

class Compiler
{
	public:
		void run()
		{
			Scanner scanner;			
			Parser parser;			
			GenMidCode genMidCode;
			GenMachineCode genMachineCode;
			
			scanner.Scan();
			parser.Parse();
			genMidCode.GenCode();
			genMachineCode.GenCode();
		}
};

#endif //COMPILER_H_