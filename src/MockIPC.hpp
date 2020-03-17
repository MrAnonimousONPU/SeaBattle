#ifndef MOCKIPC_HPP
#define MOCKIPC_HPP

#include <CommonIPC.hpp>

class MockIPC : public IPCInterface
{
public:
    MockIPC();
    virtual ~MockIPC();

    virtual bool createServer() const override;

    virtual bool conect() const override;
    virtual bool disconect() const override;
    virtual void sendFilledMap(bool **map) const override;
    virtual Constants::ShootResult shoot(uint8_t x, uint8_t y) const override;
};

#endif // MOCKIPC_HPP
