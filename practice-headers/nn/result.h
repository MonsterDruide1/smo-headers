#pragma once

#include <cstddef>
#include <cstdint>
using u32 = std::uint32_t;

namespace nn {

struct Result
{
    Result(u32 value = 0) : value(value) { }

    inline bool IsSuccess()
    {
        return value == 0;
    }

    inline bool IsFailure()
    {
        return !IsSuccess();
    }

    u32 value;
};

}
