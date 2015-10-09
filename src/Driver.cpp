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

int main(int argc,char* argv[]) {

	BlastParser blastParser(argv[1]);

	blastParser.parseFile("/home/cf797/test/casp11Alignment/");

	cout<<argv[1]<<","<<blastParser.findNumberOfGoodTemplates()<<endl;;

	return 0;
}
