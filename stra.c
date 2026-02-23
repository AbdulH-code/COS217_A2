//
// Array style implementation of str.h
// COS 217: Assignment 2
// Abdulkadir Husein
//

#include <stddef.h>
#include <assert.h>

size_t Str_getLength(const char pcSrc[])
{
    size_t uLength = 0;
    assert(pcSrc != NULL);
    while (pcSrc[uLength] != '\0')
        uLength++;
    return uLength;
}

char *Str_copy(char pcDest[], const char pcSrc[]) {
    size_t i;
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    for (i = 0; i <= Str_getLength(pcSrc); i++) {
        pcDest[i] = pcSrc[i];
    }
    return pcDest;
}

char *Str_concat(char pcDest[], const char pcSrc[]) {
    size_t i;
    size_t len = Str_getLength(pcDest);
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    for (i = 0; i <= Str_getLength(pcSrc); i++) {
        pcDest[i+len] = pcSrc[i];
    }
    return pcDest;
}

int Str_compare(const char s1[], const char s2[]) {
    size_t i = 0;
    assert(s1 != NULL);
    assert(s2 != NULL);
    while (s1[i] != '\0') {
        if (s2[i] == '\0' || (int)s1[i] > (int)s2[i])
            return 1;
        else if ((int)s1[i] < (int)s2[i])
            return -1;
        i++;
    }
    if (s1[i] == '\0' && s2[i] != '\0')
        return -1;
    return 0;
}


const char *Str_search(const char s1[], const char s2[]) {
    int i;
    int j;
    assert(s1 != NULL);
    assert(s2 != NULL);
    if (s2[0] == '\0')
        return s1;
    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i + j] == '\0')
                return NULL;
            if (s1[i + j] != s2[j])
                break;
        }
        if (s2[j] == '\0')
            return &s1[i];
    }
    return NULL;
}
