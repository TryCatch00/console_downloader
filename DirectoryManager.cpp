#include "DirectoryManager.h"

void createDirectory(const std::string& dirName) {
    #ifdef _WIN32
        if (_mkdir(dirName.c_str()) == -1) {
            std::cout << "The folder does exist or an error occurred while creating it." << std::endl;
        } else {
            std::cout << "Folder created: " << dirName << std::endl;
        }
    #else
        struct stat info;
        if (stat(dirName.c_str(), &info) != 0) {
            std::cout << "Folder does not exist, being created: " << dirName << std::endl;
            if (mkdir(dirName.c_str(), 0777) == 0) {
                std::cout << "Folder created: " << dirName << std::endl;
            } else {
                std::cout << "The folder could not be created." << std::endl;
            }
        } else {
            std::cout << "The folder already exists: " << dirName << std::endl;
        }
    #endif
}
