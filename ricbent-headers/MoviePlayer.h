#pragma once

class MoviePlayer
{
public:
    MoviePlayer();
    ~MoviePlayer();
    update();
    draw(agl::DrawContext*) const;
    getTexture() const;
    play(char const*);
    stop();
    isPlay() const;
    isDecode() const;
    isLooped() const;
};
