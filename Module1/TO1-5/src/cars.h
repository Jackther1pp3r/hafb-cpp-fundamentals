#ifndef CARS_H_
#define CARS_H_

namespace lamborghini
{
    int HorsePower(); //inside Lamborghini namespace
    void cout();
}

namespace porsche
{
    int HorsePower(); //inside porsche namespace
}

int HorsePower(); //"standard" namespace

#endif /* !CARS_H_ */
