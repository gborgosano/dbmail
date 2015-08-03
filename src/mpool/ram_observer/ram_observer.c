#include "ram_observer.h"

#define FILE_RAM "file_ram"

FILE *fileramsobserver = NULL;
int fileStatus=0;

void openFileRamObserver(void) {
	if(fileStatus ==0) {
		fileramsobserver = fopen(FILE_RAM, "a+");
		fileStatus = fileramsobserver;
	}
}

void closeFileRamObserver(void) {
	if(fileStatus > 0) {
		fclose(fileramsobserver);
		fileStatus=0;
	}
}

void writeByteSizeRamObserver(unsigned long byte_size, char * descr) {
	if(fileStatus > 0) {
		fprintf(fileramsobserver, "[%s]|%lu \n", descr, byte_size);
		
	}
}

