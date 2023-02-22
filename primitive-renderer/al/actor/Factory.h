#pragma once

namespace al
{
    class LiveActor;
    
    template <class T>
    al::LiveActor* createActorFunction(const char *name);

    template<class T>
    struct FactoryEntry
    {
        const char* mName; 
        T createActorFunction; 
    };

    template<class T>
    class Factory {
        public:
            inline Factory() {};

            virtual const char * convertName(char const *name) const {
                return name; 
            };
            
            inline T getCreator(const char *name) {
                for (size_t i = 0; i < this->factoryCount; i++)
                {
                    if(al::isEqualString(this->actorTable[i].actorName, name)) { 
                        return this->actorTable[i].createActorFunction;
                    } 
                }
                return nullptr;
            };

        protected:
            // 0x0 is vtable
            const char *factoryName; // 0x8
            al::FactoryEntry<T> *actorTable; // 0x10
            int factoryCount; // 0x18
    };

    typedef al::LiveActor* (*createActor)(const char* name);
    
    class ActorFactory : public al::Factory<createActor> 
    {
    public:
        ActorFactory(const char *fName) {
                this->factoryName = fName;
                this->actorTable = nullptr;
                this->factoryCount = 0;
            };

        const char* mFactoryName; // _8
        al::FactoryEntry<createActor>** mFactoryEntries; // _10
        int mNumFactoryEntries; // _18
    };
    
    class ProjectActorFactory : public al::ActorFactory
    {
    public:
        ProjectActorFactory();
    };
};
