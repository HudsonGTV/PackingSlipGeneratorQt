#ifndef ENTITYCOMPANY_H
#define ENTITYCOMPANY_H

#include "entity.h"

class EntityCompany : public Entity {
private:
    QString m_website;

public:
    void setWebsite(QString website);

    QString getWebsite();
};

#endif // ENTITYCOMPANY_H
