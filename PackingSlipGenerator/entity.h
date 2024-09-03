#ifndef ENTITY_H
#define ENTITY_H

#include <QString>

#include "address.h"

class Entity {

private:
    QString m_name;
    unsigned short m_tel[3];

public:
    Address address;

    ~Entity();

    // Setter functions
    void setName(QString name);
    void setTelephone(unsigned short tel[3]);
    void setTelephoneArea(unsigned short area);
    void setTelephonePrefix(unsigned short prefix);
    void setTelephoneNumber(unsigned short number);

    // Getter functions
    QString getName();
    QString getTelephone();

};

#endif // ENTITY_H
