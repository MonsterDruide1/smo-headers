#pragma once

class TestPacketReader
{
public:
    TestPacketReader(int);
    clear();
    copy(unsigned char*, int);
    resetRead();
    readData(void*, int);
    skipData(int);
    isEnd() const;
};
