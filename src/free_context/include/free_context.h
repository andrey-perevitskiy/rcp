#ifndef FREE_CONTEXT_H

#include "free_context-consts.h"
#include "free_context-struct.h"

void fc_add (void * object, int type, struct free_context * fc);
void exit_free (struct free_context * fc, int status);

#define FREE_CONTEXT_H
#endif
