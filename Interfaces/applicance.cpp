#include "applicance.h"

applicance::applicance(QObject *parent) : QObject(parent)
{

}

bool applicance::freeze()
{
    return true;
}

bool applicance::grill()
{
    return true;
}

bool applicance::cook()
{
    return true;
}
