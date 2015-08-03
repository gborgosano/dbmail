#include "ram_observer.h"
#include <stdio.h>

#define FILE_RAM "observer/file_ram.txt"

FILE *fileramsobserver = NULL;
int fileStatus=0;

void openFileRamObserver(void) {
	printf("openFileRamObserver\n");

	if(fileStatus ==0) {

		fileramsobserver = fopen(FILE_RAM, "a+");

		if(fileramsobserver == NULL) {
			fileStatus= -1;
			printf("unable to openFileRamObserver\n");
		} else {
			fileStatus = 1;
			printf("openFileRamObserver ok\n");
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
	
	printf("[%s]| %lu \n", descr, byte_size);

	if(fileStatus == 0) {
		openFileRamObserver();
	}

	
		fprintf(fileramsobserver, "[%s]|%lu \n", descr, byte_size);
		closeFileRamObserver();
	

}

