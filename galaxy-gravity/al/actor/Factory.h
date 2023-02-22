#pragma once

namespace al
{
    class LiveActor;

    template <class T>
    struct FactoryEntry
    {
        const char* mName; // _0
        T* mCreationFunction; // _8
    };

    template<typename T>
    class Factory
    {
    public:
        inline Factory(){};

        virtual const char *convertName(char const *name) const
        {
            return name;
        };

        inline T getCreator(const char *name)
        {
            for (size_t i = 0; i < this->factoryCount; i++)
            {
                if (al::isEqualString(this->actorTable[i].actorName, name))
                {
                    return this->actorTable[i].createActorFunction;
                }
            }
            return nullptr;
        };

    protected:
        const char* mFactoryName; // _8
        al::FactoryEntry<T>* mFactoryEntries; // _10
        int mNumFactoryEntries; // _18
    };
};
