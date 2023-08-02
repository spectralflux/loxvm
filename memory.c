#include <stdlib.h>

#include "memory.h"

void *reallocate(void *pointer, size_t oldSize, size_t newSize) {
   if (newSize == 0) {
       free(pointer);
       return NULL;
   }

   void* result = realloc(pointer, newSize);

   // if we can't realloc because there's no memory to do so, bork
   if (result == NULL) exit(1);

   return result;
}
