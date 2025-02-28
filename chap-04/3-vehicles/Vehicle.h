#pragma once

#include <iostream>

class Driver
{
public:
    bool has_car_licence() const { return _has_car_licence; }
    void pass_car_licence_exam() { _has_car_licence = true; }

    bool has_air_licence() const { return _has_air_licence; }
    void pass_air_licence_exam() { _has_air_licence = true; }

private:
    bool _has_car_licence = false;
    bool _has_air_licence = false;
};

class Vehicle
{

public:
    Vehicle(const Driver& driver)
        : _driver { driver }
    {}

    virtual ~Vehicle() {}

    virtual unsigned int drive() const = 0;

protected:
    const Driver& _driver;
};
