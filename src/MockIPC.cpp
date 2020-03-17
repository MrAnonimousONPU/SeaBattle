#include "MockIPC.hpp"

MockIPC::MockIPC()
    : IPCInterface()
{
}

MockIPC::~MockIPC()
{
}

bool MockIPC::createServer() const
{
    return true;
}

bool MockIPC::conect() const
{
    return true;
}

bool MockIPC::disconect() const
{
    return true;
}

void MockIPC::sendFilledMap(bool** map) const
{
}

Constants::ShootResult MockIPC::shoot(uint8_t x, uint8_t y) const
{
    return Constants::ShootResult::HIT;
}
