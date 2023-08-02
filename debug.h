#ifndef LOXVM_DEBUG_H
#define LOXVM_DEBUG_H

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif //LOXVM_DEBUG_H
