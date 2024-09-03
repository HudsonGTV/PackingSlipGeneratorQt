#include "entity.h"

Entity::~Entity() {

}

/**
 * @brief Entity::setName - sets company name
 * @param name - the name of the company
 */
void Entity::setName(QString name) {
    m_name = name;
}

/**
 * @brief Entity::setTelephone - sets company telephone number
 * @param tel - the telephone number in array "XXX", "XXX", "XXXX"
 */
void Entity::setTelephone(unsigned short tel[3]) {
    m_tel[0] = tel[0];
    m_tel[1] = tel[1];
    m_tel[2] = tel[2];
}

/**
 * @brief Entity::setTelephoneArea - sets tele area code
 * @param area - the 3 digit area code
 */
void Entity::setTelephoneArea(unsigned short area) {
    m_tel[0] = area;
}

void Entity::setTelephonePrefix(unsigned short prefix) {
    m_tel[1] = prefix;
}

void Entity::setTelephoneNumber(unsigned short number) {
    m_tel[2] = number;
}

/**
 * @brief Entity::getName - gets name of company
 * @return company name
 */
QString Entity::getName() {
    return m_name;
}

/**
 * @brief Entity::getTelephone - gets telephone number in string
 * @return company telephone number string
 */
QString Entity::getTelephone() {
    return QString("%1-%2-%3")
        .arg(m_tel[0], 3, 10, QChar('0'))
        .arg(m_tel[1], 3, 10, QChar('0'))
        .arg(m_tel[2], 4, 10, QChar('0'));
}
