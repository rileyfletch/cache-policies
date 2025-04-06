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

enum class ReplacementPolicy {
    LRU,
    LFU,
    FIFO,   
};

enum class WritePolicy {
    WRITE_BACK,
    WRITE_THROUGH, 
};

enum class CacheSize {
    CACHE_8K,
    CACHE_16K,
    CACHE_32K,
    CACHE_64K,
    CACHE_128k,  
};