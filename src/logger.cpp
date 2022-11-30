#include "../include/logger.h"
#include "../include/info.h"

std::ofstream Logger::coutFile;

Logger::Logger() { }

void Logger::Initialize() {
	coutFile = std::ofstream("logs.txt");

	_ASSERT(coutFile.is_open());

	coutFile << "INFO >> RIGISIM Version " << RIGISIM_VERSION << std::endl;
	coutFile << "INFO >> Built on " << RIGISIM_BUILD_DATE << std::endl;
	coutFile << "INFO >> Made by " << RIGISIM_AUTHOR << " aka " << RIGISIM_AUTHOR_ALT << std::endl;
	coutFile << std::endl;
}

void Logger::Finalize() {
	coutFile.flush();
	coutFile.close();
}

void Logger::Debug(std::string message) {
	OutputDebugStringA(message.c_str());
	printf(message.c_str());

	coutFile << "LOG >> " << message.c_str() << std::endl;
}

void Logger::DebugLine(std::string message) {
	Debug(message + "\n");
}