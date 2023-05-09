#ifndef TRANSFER_H

#include "transfer-consts.h"
#include "transfer-types.h"

int read_from_socket (int fd, void * buf, ssize_t size);
int write_to_socket (int fd, void * buf, ssize_t len, const char * fmt, ...);

#define TRANSER_H
#endif
