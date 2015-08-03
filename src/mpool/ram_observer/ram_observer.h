/* 
 * File:   ram_observer.h
 * Author: gaetanoborgosano
 *
 * Created on 3 agosto 2015, 15.09
 */

#include <stdio.h>

#ifndef RAM_OBSERVER_H
#define	RAM_OBSERVER_H


extern void openFileRamObserver(void);

extern void closeFileRamObserver(void);

extern void writeByteSizeRamObserver(unsigned long byte_size, char * descr);


#endif	/* RAM_OBSERVER_H */

