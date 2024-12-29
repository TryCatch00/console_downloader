#ifndef DIRECTORY_MANAGER_H
#define DIRECTORY_MANAGER_H

#include <iostream>
#include <string>

#ifdef _WIN32
#include <direct.h>
#else
#include <sys/stat.h>
#endif

void createDirectory(const std::string& dirName);

#endif