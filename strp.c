//
// Pointer style implementation of str.h
// COS 217: Assignment 2
// Abdulkadir Husein
//

#include <assert.h>
#include <stddef.h>

size_t Str_getLength(const char *pcSrc) {
    const char *pcEnd;
    assert(pcSrc != NULL);
    pcEnd = pcSrc;
    while (*pcEnd != '\0')
        pcEnd++;
    return (size_t)(pcEnd - pcSrc);
}

char *Str_copy(char *pcDest, const char *pcSrc) {
    char *pcIn = pcDest;
    const char *pcOut = pcSrc;
    size_t i;
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    for (i = 0; i <= Str_getLength(pcSrc); i++) {
        *pcIn = *pcOut;
        pcIn++;
        pcOut++;
    }
    return pcDest;
}

char *Str_concat(char *pcDest, const char *pcSrc) {
    char *pcIn = pcDest;
    const char *pcOut = pcSrc;
    size_t i;
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    while (*pcIn != '\0')
        pcIn++;
    for (i = 0; i <= Str_getLength(pcSrc); i++) {
        *pcIn = *pcOut;
        pcIn++;
        pcOut++;
    }
    return pcDest;
}

int Str_compare(const char *s1, const char *s2) {
    const char *pcComp1 = s1;
    const char *pcComp2 = s2;
    assert(s1 != NULL);
    assert(s2 != NULL);
    while (*pcComp1 != '\0') {
        if (*pcComp2 == '\0' || *pcComp1 > *pcComp2) return 1;
        else if (*pcComp1 < *pcComp2) return -1;
        pcComp1++;
        pcComp2++;
    }
    if (*pcComp1 == '\0' && *pcComp2 != '\0') return -1;
    return 0;
}

// Returns a pointer pointing to the first char of the found s2 in s1 otherwise a null pointer if s2 is not in s1.
// If s2 points to an empty string, s1 is returned.
const char *Str_search(const char *s1, const char *s2) {
    const char *pcSrch1;
    const char *pcSrch2;
    const char *pcStart;
    assert(s1 != NULL);
    assert(s2 != NULL);
    if (*s2 == '\0') return s1;
    pcStart = s1;
    while (*pcStart != '\0') {
        pcSrch1 = pcStart;
        pcSrch2 = s2;
        while (*pcSrch1 != '\0' && *pcSrch2 != '\0' && *pcSrch1 == *pcSrch2) {
            pcSrch1++;
            pcSrch2++;
        }
        if (*pcSrch2 == '\0') return pcStart;
        pcStart++;
    }
    return NULL;
}
