#pragma once
#include <stdint.h>
#define wchar_t int
#define NULL nullptr
#define EXIT_FAILURE -1
#define EXIT_SUCCESS 0
#define RAND_MAX 0x7FFFFFFF
#define MB_CUR_MAX 4
#define NULL 0
int atoi(const char*);
long atol(const char*);

extern "C" void *malloc(size_t size);
void *calloc(size_t nitems, size_t size);
extern "C" void free(void* ptr);
void *realloc(void* ptr, size_t size);

extern "C" void abort();
#define atexit(x) (-1)
void exit(int status);
#define getenv(a) (NULL)
#define system(a) (-1)

void *bsearch(const void* key, const void* base, size_t nitems, size_t size, int(*compar)(const void*, const void*));
void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void*, const void*));
