#pragma once

namespace nn { namespace nex { namespace MemAllocator<unsigned short> {

MemAllocator();
MemAllocator(nn::nex::MemAllocator<unsigned short> const&);
address(unsigned short&) const;
address(unsigned short const&) const;
operator==(nn::nex::MemAllocator<unsigned short> const&) const;
operator!=(nn::nex::MemAllocator<unsigned short> const&) const;
allocate(unsigned long, void const*);
deallocate(void*, unsigned long);
construct(unsigned short*, unsigned short const&);
construct(unsigned short*, unsigned short&&);
destroy(unsigned short*);
max_size() const;

} } } 
