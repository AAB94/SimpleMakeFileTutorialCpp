#include "common.hpp"
#include <dirent.h>
#include <stdio.h>

void custom::parseFolder(const char *path) {
    struct dirent *p;
    DIR *dir;
    dir = opendir(path);
    printf("%50s\n", "Names");
    printf("---------------------------------------------------\n");
    while ((p = readdir(dir))  != nullptr) {
        printf("%35s\n", p->d_name);
    }
}