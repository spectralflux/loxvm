#ifndef LOXVM_COMPILER_H
#define LOXVM_COMPILER_H


#include "object.h"
#include "vm.h"

ObjFunction* compile(const char* source);
void markCompilerRoots();

#endif //LOXVM_COMPILER_H
