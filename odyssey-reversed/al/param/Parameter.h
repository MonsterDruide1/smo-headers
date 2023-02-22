/**
 * @file Parameter.h
 * @brief Parameter template for a attribute in an actor.
 */

#pragma once

#include "types.h"

namespace al
{
    template<typename T>
    class ParameterBase
    {
    public:
        virtual u64* getParamTypeStr() const = 0;
        virtual s64 getParamType() const = 0;
        virtual T* ptr() = 0;
        virtual T* ptr() const = 0;
        virtual void afterGetParam();
        virtual s64 size() const = 0;
        virtual bool isEqual(al::ParameterBase<T> const &);
        virtual bool copy(al::ParameterBase<T> const &);
        virtual bool copyLerp(al::ParameterBase<T> const &, al::ParameterBase<T> const &, f32);
    };

    template<typename T>
    class Parameter : public ParameterBase<T>
    {
    public:
        virtual u64* getParamTypeStr() const;
        virtual s64 getParamType() const;
        virtual T* ptr();
        virtual T* ptr() const;

        virtual s64 size() const;
    };

};
