alignmentResultParser: jsoncpp.o BlastParser.o BlastRecord.o Driver.o
	g++ jsoncpp.o  BlastParser.o BlastRecord.o Driver.o -o alignmentResultParser

jsoncpp.o: jsoncpp.cpp
	g++ -c jsoncpp.cpp
	
BlastParser.o: BlastParser.cpp
	g++ -c BlastParser.cpp
	
BlastRecord.o: BlastRecord.cpp
	g++ -c BlastRecord.cpp

	
Driver.o: Driver.cpp
	g++ -c Driver.cpp
	

clean:
	rm *.o alignmentResultParser