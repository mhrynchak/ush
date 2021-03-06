#include "ush.h"

char *util_strcpy(char *dst, const char *src, int first, int end) {
    int i = first;
    int j = 0;

    while (src[i] && i != end) {
        dst[j] = src[i];
        i++;
        j++;
    }
    return dst;
}
