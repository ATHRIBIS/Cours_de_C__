//
// Created by Aymeric Schaeffer on 05/12/2020.
//
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include "logSystem.h"
using namespace std;

void logInit() {
    string logsFile("/Volumes/Stockage/Développement/Aymeric/2020/Programmez avec le langage C++/Flux/files/logs.txt");
    ofstream logger(logsFile.c_str(), ios::app);
    if (logger) {
        cout << "Logs system init well !";
        logger << "\n\n======================================\n" << "Log system init well at : " << time(nullptr) << "\nStarting logging ...\n";
    } else {
        cout << "ERROR: Logs systeme doesnt init well ! CLANG !";
        exit(1);
    }

}

void logError(int logLevel, string reasonLogEntry) {
    string logsFile("/Volumes/Stockage/Développement/Aymeric/2020/Programmez avec le langage C++/Flux/files/logs.txt");
    ofstream logger(logsFile.c_str(), ios::app);
    //faire type en fonctione de int typeOfentryLog
    logger << "[" << time(nullptr) << "][" << "ERROR]:[level" << logLevel << "] - " << reasonLogEntry << "." << endl;
}

void logAlert(int logLevel, string reasonLogEntry) {
    string logsFile("/Volumes/Stockage/Développement/Aymeric/2020/Programmez avec le langage C++/Flux/files/logs.txt");
    ofstream logger(logsFile.c_str(), ios::app);
    //faire type en fonctione de int typeOfentryLog
    logger << "[" << time(nullptr) << "][" << "ALERT]:[level" << logLevel << "] - " << reasonLogEntry << "." << endl;
}