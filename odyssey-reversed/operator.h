/**
 * @file operator.h
 * @brief Common operators, and new implementations with Heaps.
 */

#pragma once

#include <cstddef>
#include <new>
#include <std.h>
#include "types.h"
#include "sead/heap.h"

// Nintendo didn't implement these for some reason
void* operator new(std::size_t size, void*);
void* operator new[](std::size_t size, void*);

void* operator new(std::size_t size);
void* operator new[](std::size_t size);
void* operator new(std::size_t size, std::nothrow_t const &);
void* operator new[](std::size_t size, std::nothrow_t const &);
void* operator new(std::size_t size, ulong);
void* operator new[](std::size_t size, ulong);
void* operator new(std::size_t size, s32);
void* operator new[](std::size_t size, s32);
void* operator new(std::size_t size, s32, std::nothrow_t const &);
void* operator new[](std::size_t size, s32, std::nothrow_t const &);
void* operator new(std::size_t size, sead::Heap *, s32);
void* operator new[](std::size_t size, sead::Heap *, s32);
void* operator new(std::size_t size, sead::Heap *, std::nothrow_t const &);
void* operator new[](std::size_t size, sead::Heap *, std::nothrow_t const &);
void* operator new(std::size_t size, sead::Heap *, s32, std::nothrow_t const &);
void* operator new[](std::size_t size, sead::Heap *, s32, std::nothrow_t const &);

void operator delete(void *);
void operator delete[](void *);
void operator delete(void *, std::size_t);
void operator delete[](void *, std::size_t);
void operator delete(void *, std::nothrow_t const &);
void operator delete[](void *, std::nothrow_t const &);
void operator delete(void *, s32);
void operator delete[](void *, s32);
void operator delete(void *, s32, std::nothrow_t const &);
void operator delete[](void *, s32, std::nothrow_t const &);
void operator delete(void *, sead::Heap *, s32);
void operator delete[](void *, sead::Heap *, s32);
void operator delete(void *, sead::Heap *, std::nothrow_t const &);
void operator delete[](void *, sead::Heap *, std::nothrow_t const &);
void operator delete(void *, sead::Heap *, s32, std::nothrow_t const &);
void operator delete[](void *, sead::Heap *, s32, std::nothrow_t const &);
