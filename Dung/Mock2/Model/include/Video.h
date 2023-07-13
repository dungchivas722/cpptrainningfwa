#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>

class Video
{
private:
    std::string Name; 
    int Size, Duration, Bitrate, Codec;
public:
    Video();
    ~Video();
    std::string getName();
    int getSize();
    int getDuration();
    int getBitrate();
    int getCodec();
    void setName(std::string Name);
    void setSize(int Size);
    void setDuration(int Duration);
    void setBitrate(int Bitrate);
    void setCodec(int Codec);
};
#endif