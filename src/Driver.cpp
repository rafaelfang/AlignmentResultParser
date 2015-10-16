//============================================================================
// Name        : AlignmentResultParser.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cstring>
#include <iostream>

#include "BlastParser.h"

using namespace std;

int main(int argc, char* argv[]) {

	if (argc != 3) {
		cout << "the input should like this:" << endl;
		cout << "<excutable> <type> <rootName>" << endl;
		return 0;
	}
	if (strcmp(argv[1], "-blaPDB") == 0) {

		BlastParser blastParser(argv[2]);
		blastParser.parseFile("/home/cf797/test/casp11Alignment/");
		blastParser.storeRecords("/home/cf797/test/casp11OutputResultFolder/");

	}
	return 0;
}
