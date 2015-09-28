/*
 * BlastRecord.h
 *
 *  Created on: Sep 27, 2015
 *      Author: Chao
 */

#ifndef BLASTRECORD_H_
#define BLASTRECORD_H_
#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
using namespace std;
class BlastRecord {
public:
	BlastRecord();
	virtual ~BlastRecord();

	int getHitLength();
	void setHitLength(int hitLength);
	string& getHitName();
	void setHitName(string& hitName);
	int getQueryEnd();
	void setQueryEnd(int queryEnd);
	string& getQueryPart();
	void setQueryPart(string& queryPart);
	int getQueryStart();
	void setQueryStart(int queryStart);
	string& getRootName();
	void setRootName(string& rootName);
	double getScore();
	void setScore(double score);
	int getSubjectEnd();
	void setSubjectEnd(int subjectEnd);
	string& getSubjectPart();
	void setSubjectPart(string& subjectPart);
	int getSubjectStart();
	void setSubjectStart(int subjectStart);
	double getExpect();
	void setExpect(double expect);
	void displayRecordInfo();

private:
	string rootName;
	string hitName;
	int hitLength;
	double score;
	double expect;
	int queryStart, queryEnd;
	string queryPart;
	int subjectStart, subjectEnd;
	string subjectPart;
};

#endif /* BLASTRECORD_H_ */
