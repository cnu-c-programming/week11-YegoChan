#include <stdio.h>
#include <stdlib.h>
// strcmp를 쓰라는 의미?
#include <string.h>

int cmp_str(const void* a, const void* b) {
    // strcmp는 
    return strcmp(*(const char**)a, *(const char**)b);
}

int main(void) {
    const char* words[] = { "banana", "apple", "ant", "orange" };
    int size = sizeof(words) / sizeof(words[0]);

    qsort(words, size, sizeof(words[0]), cmp_str);

    for (int i = 0; i < size; i++) {
        printf("%s\n", words[i]);
    }
    
    return 0;
}