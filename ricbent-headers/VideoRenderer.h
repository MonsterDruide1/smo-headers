#pragma once

class VideoRenderer
{
public:
    VideoRenderer();
    ~VideoRenderer();
    open(movie::Decoder*, sead::Heap*, int, int);
    onOutputAvailable(int, long, unsigned int);
    stop();
    update();
    draw(agl::DrawContext*) const;
};
