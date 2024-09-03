#include "entitycompany.h"

/**
 * @brief EntityCompany::setWebsite - sets website URL
 * @param website - the website URL
 */
void EntityCompany::setWebsite(QString website) {
    m_website = website;
}

/**
 * @brief EntityCompany::getWebsite - gets the website URL
 * @return the website URL
 */
QString EntityCompany::getWebsite() {
    return m_website;
}
