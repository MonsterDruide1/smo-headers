#pragma once

namespace nn { namespace nex { namespace qReservedQueue<unsigned char> {

capacity() const;
empty() const;
qReservedQueue(unsigned long);
qReservedQueue(nn::nex::qReservedQueue<unsigned char>&&);
operator=(nn::nex::qReservedQueue<unsigned char>&&);
size() const;
full() const;
room() const;
push(unsigned char const&);
front() const;
at(unsigned long) const;
find(unsigned char const&) const;
begin();
begin() const;
end();
end() const;
rbegin();
rend();
qReservedQueue();
push(unsigned char const*, unsigned long);
front(unsigned char*, unsigned long);
pop();
pop(unsigned long);
clear();

} } } 
