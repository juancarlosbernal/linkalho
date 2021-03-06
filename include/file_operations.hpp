#ifndef __LINKALHO_FILE_OPERATIONS_HPP__
#define __LINKALHO_FILE_OPERATIONS_HPP__

#include <filesystem>
#include <vector>

bool initDirs();
void linkAccount();
void unlinkAccount();
void restoreBackup(const std::string& backupFullpath);
void manualBackup();

#endif // __LINKALHO_FILE_OPERATIONS_HPP__
