/*
 * BlastRecord.cpp
 *
 *  Created on: Sep 27, 2015
 *      Author: Chao
 */

#include "BlastRecord.h"

BlastRecord::BlastRecord() {
	// TODO Auto-generated ructor stub

}

BlastRecord::~BlastRecord() {
	// TODO Auto-generated destructor stub
}
void BlastRecord::displayRecordInfo() {
	cout << endl;
	cout << hitName << "\t" << score << "\t" << expect << endl;
	cout << queryStart << "\t" << queryPart << "\t" << queryEnd << endl;
	cout << subjectStart << "\t" << subjectPart << "\t" << subjectEnd<<endl;
	cout << endl;
}

int BlastRecord::getHitLength() {
	return hitLength;
}

void BlastRecord::setHitLength(int hitLength) {
	this->hitLength = hitLength;
}

string& BlastRecord::getHitName() {
	return hitName;
}

void BlastRecord::setHitName(string& hitName) {
	this->hitName = hitName;
}

int BlastRecord::getQueryEnd() {
	return queryEnd;
}

void BlastRecord::setQueryEnd(int queryEnd) {
	this->queryEnd = queryEnd;
}

string& BlastRecord::getQueryPart() {
	return queryPart;
}

void BlastRecord::setQueryPart(string& queryPart) {
	this->queryPart = queryPart;
}

int BlastRecord::getQueryStart() {
	return queryStart;
}

void BlastRecord::setQueryStart(int queryStart) {
	this->queryStart = queryStart;
}

string& BlastRecord::getRootName() {
	return rootName;
}

void BlastRecord::setRootName(string& rootName) {
	this->rootName = rootName;
}

double BlastRecord::getScore() {
	return score;
}

void BlastRecord::setScore(double score) {
	this->score = score;
}

int BlastRecord::getSubjectEnd() {
	return subjectEnd;
}

void BlastRecord::setSubjectEnd(int subjectEnd) {
	this->subjectEnd = subjectEnd;
}

string& BlastRecord::getSubjectPart() {
	return subjectPart;
}

void BlastRecord::setSubjectPart(string& subjectPart) {
	this->subjectPart = subjectPart;
}

int BlastRecord::getSubjectStart() {
	return subjectStart;
}

void BlastRecord::setSubjectStart(int subjectStart) {
	this->subjectStart = subjectStart;
}

double BlastRecord::getExpect() {
	return expect;
}

void BlastRecord::setExpect(double expect) {
	this->expect = expect;
}
