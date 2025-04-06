/*
 * Implementation of cache types for different placement policies
 */

#include <iostream>

#include "cache.hh"

class Cache {
public:
    Cache(){}

    virtual DataBlock getBlock(u_int64_t) = 0;
    virtual void setBlock(u_int64_t, DataBlock) = 0;
    virtual void invalidateBlock(u_int64_t) = 0;
    virtual void flush() = 0;

    virtual bool contains(u_int64_t) = 0;
    virtual bool isDirty(u_int64_t) = 0;
    virtual void statistics(u_int64_t) = 0;

    virtual void setReplacementPolicy(ReplacementPolicy) = 0;
    virtual void setWritePolicy(WritePolicy) = 0;
    virtual void setCacheSize(CacheSize) = 0;
};

class DirectMappedCache : public Cache {

};

class FullyAssociativeCache : public Cache {

};

class SetAssociativeCache : public Cache {

};