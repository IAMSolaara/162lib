#ifndef LORE
#define LORE
/** @brief C/C++ library I use for some programs, which includes exercises done at school.
 * @author Lorenzo "lorecast162" Cauli
 * @date September 2019
 */
#include <stdio.h>

/**
 * Struct used for date storage
 */
typedef struct{
	/** Day field*/
	int day;
	/** Month field*/
	int month;
	/** Year field*/
	int year;
}tData;

#ifdef __cplusplus
extern "C" {
#endif
/**
 * Init random number generator based on time.h
 */
void rndGenInit();

/**
 * Generate a random integer between a minimum and maximum value.
 * @param min Minimum value.
 * @param max Maximum value.
 * @return A random integer between min and max.
 */
int rnd(int min, int max);

/**
 * Open a file given path and mode.
 *
 * @param filename File path passed as a string.
 * @param perm File open mode passed as a string.
 *
 * @return Pointer to opened file's I/O stream.
 */
FILE* fileOpen(const char filename[], const char perm[]);

/**
 * Read date in a format to be stored in a struct of type tData with stdin as input stream.
 *
 * @param out The record into which the date needs to be stored.
 */
void dataRead(tData out);

/**
 * Read date in a format to be stored in a struct of type tData with file as input stream.
 *
 * @param file Pointer to the file from which the function will read.
 * @param out The record into which the date needs to be stored.
 */
void fdataRead(FILE* file, tData out);

#ifdef __cplusplus
}
#endif

#endif
