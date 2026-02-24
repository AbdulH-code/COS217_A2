/*
String Interface
COS 217: Assignment 2
Abdulkadir Husein
*/

#ifndef STRINGS_STR_H
#define STRINGS_STR_H

#include <stddef.h>

/* returns the length of the string pcSrc points to */
size_t Str_getLength(const char *pcSrc);

/* copies one string, pointed to by pcSrc, into another, pointed to by pcDest. Returns pcDest. */
char *Str_copy(char *pcDest, const char *pcSrc);

/* concatenates pcSrc string with pcDest string. Returns pcDest. */
char *Str_concat(char *pcDest, const char *pcSrc);

/* Compares s1 and s2 lexicographically. If the two strings are equal, 0 is returned. If s1 is greater, 1 is returned.
   If s1 is less than s2, -1 is returned. */
int Str_compare(const char *s1, const char *s2);

/* Returns a pointer pointing to the first char of the found s2 in s1 otherwise a null pointer if s2 is not in s1.
   If s2 points to an empty string, s1 is returned. */
char *Str_search(const char *s1, const char *s2);

#endif
