#ifndef LOXVM_COMPILER_H
#define LOXVM_COMPILER_H


#include "object.h"
#include "vm.h"

bool compile(const char* source, Chunk* chunk);

#endif //LOXVM_COMPILER_H
