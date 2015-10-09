/*
 * BlastParser.h
 *
 *  Created on: Sep 27, 2015
 *      Author: Chao
 */

#ifndef BLASTPARSER_H_
#define BLASTPARSER_H_

#include "BlastRecord.h"

#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <string.h>
class BlastParser {
public:
	BlastParser();
	BlastParser(string);
	virtual ~BlastParser();
	void parseFile(string);
	string& getRootName();
	void setRootName(string& rootName);
	int findNumberOfGoodTemplates();

private:
	string rootName;
	vector<BlastRecord> blastRecords;
	bool proteinNameFlag;
	bool expectFlag;
	bool queryPartFlag;
};

#endif /* BLASTPARSER_H_ */
