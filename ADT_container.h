#pragma once
#include <inttypes.h>



typedef void* Pointer;
typedef char* Container;
typedef uint8_t Metadata;


// Public functions

Container newContainer();
Container initContainer(Container container);

void deleteContainer(Container container);
