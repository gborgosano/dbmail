#include "ram_observer.h"


#define FILE_RAM "observer/file_ram.txt"

FILE *fileramsobserver = NULL;
int fileStatus=0;

void openFileRamObserver(void) {
	if(fileStatus ==0) {
		fileramsobserver = fopen(FILE_RAM, "a+");
		fileStatus = fileramsobserver;
		if(fileStatus < 0) {
			printf("unable to openFileRamObserver\n");
		}
	}
}

void closeFileRamObserver(void) {
	if(fileStatus > 0) {
		fclose(fileramsobserver);
		fileStatus=0;
	}
}

void writeByteSizeRamObserver(unsigned long byte_size, char * descr) {
	printf("[%s]|%lu \n", descr, byte_size);

	if(fileStatus > 0) {
		fprintf(fileramsobserver, "[%s]|%lu \n", descr, byte_size);
	} else {
		printf("unable to writeByteSizeRamObserver\n");

	}
}

