/*
 * Header for cache implementations. 
 * 64-bit addresses with 64-byte blocks.
 * 6 offset bit required for block.
 */

#pragma once

#include <iostream>

typedef struct {
    u_int64_t address;
    char data[64];
} DataBlock;