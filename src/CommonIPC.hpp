#ifndef CLIENTIPC_HPP
#define CLIENTIPC_HPP

#include <Constants.hpp>

#include <iostream>

class IPCInterface
{
public:
    IPCInterface(){}
    virtual ~IPCInterface(){}

    virtual bool createServer() const = 0;

    virtual bool conect() const = 0;
    virtual bool disconect() const = 0;
    virtual void sendFilledMap(bool **map) const = 0;
    virtual Constants::ShootResult shoot(uint8_t x, uint8_t y) const = 0;
};

#endif // CLIENTIPC_HPP
