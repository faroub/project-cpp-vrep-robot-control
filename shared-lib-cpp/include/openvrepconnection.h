#ifndef OPENVREPCONNECTION_H
#define OPENVREPCONNECTION_H

extern "C" {
    #include "extApi.h"
}

class OpenVrepConnection
{
public:
    explicit OpenVrepConnection();
    ~OpenVrepConnection();
    int getVrepClientID() { return m_clientID; }

private:
    int m_clientID;

};

#endif // OPENVREPCONNECTION_H
