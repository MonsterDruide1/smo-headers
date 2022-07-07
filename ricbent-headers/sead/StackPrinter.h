#pragma once

namespace sead { 

class StackPrinter
{
public:
    StackPrinter();
    ~StackPrinter();
    show(sead::StackTraceBase const&, sead::Buffer<sead::BufferedSafeStringBase<char>*> const*, sead::Buffer<sead::BufferedSafeStringBase<char>*> const*) const;
};

} 
