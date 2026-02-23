/*
String Interface
COS 217: Assignment 2
Abdulkadir Husein
*/

#ifndef STRINGS_STR_H
#define STRINGS_STR_H

#include <stddef.h>

/* returns the length of a string */
size_t Str_getLength(const char *pcSrc);

/* copies one string into another */
char *Str_copy(char *pcDest, const char *pcSrc);

/* concatenates two strings together */
char *Str_concat(char *pcDest, const char *pcSrc);

/* Compares two lexicographically. If the two strings are equal, 0 is returned. If s1 is greater, 1 is returned.
   If s1 is less than s2, -1 is returned. */
int Str_compare(const char *s1, const char *s2);

/* Returns a pointer pointing to the first char of the found s2 in s1 otherwise a null pointer if s2 is not in s1.
   If s2 points to an empty string, s1 is returned. */
char *Str_search(const char *s1, const char *s2);

#endif
