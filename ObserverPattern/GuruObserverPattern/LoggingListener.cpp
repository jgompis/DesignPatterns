#include "LoggingListener.h"
#include <iostream>

LoggingListener::LoggingListener(const std::string &logFilename, const std::string &message){
    _logFile.open(logFilename, std::fstream::out | std::fstream::app);
    _message= message;
}

LoggingListener::~LoggingListener(){
    if(_logFile.is_open()){
        _logFile.close();
    }
}

void LoggingListener::update(const std::string &filename){

    std::string rep= "%s";
    std::string wData= _message.replace(_message.find(rep), rep.size(), filename) + "\n";
    std::cout << wData << std::endl;
    _logFile.write(wData.c_str(), wData.size());
    _logFile.flush();
}