//
// Created by Aymeric Schaeffer on 05/12/2020.
//

#ifndef PROGRAMMEZ_AVEC_LE_LANGAGE_C___LOGSYSTEM_H
#define PROGRAMMEZ_AVEC_LE_LANGAGE_C___LOGSYSTEM_H

/**
 * Initialize the logSystem
 */
void logInit();

/**
 * Pull and error
 * @param logLevel - level of importance of the information
 * @param reasonLogEntry - string, explain teh log
 */
void logError(int logLevel = 0, std::string reasonLogEntry = "An error occured... (default reason)");

/**
 * Pull and alert
 * @param logLevel - level of importance of the information
 * @param reasonLogEntry - string, explain teh log
 */
void logAlert(int logLevel = 0, std::string reasonLogEntry = "An alert occured... (default reason)");

#endif //PROGRAMMEZ_AVEC_LE_LANGAGE_C___LOGSYSTEM_H
