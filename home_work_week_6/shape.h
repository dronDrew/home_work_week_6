#pragma once
#include "dependies.h"
class point {
protected:
    int x;
    int y;
public:
    point();
    point(int x, int y);
};

class shape
{
public:
    virtual void show() = 0;
    virtual void save(const char* path) = 0;
    virtual void load(const char* path) = 0;
    virtual ~shape() = 0;

};
class Squer : public point, public shape {
    int lenght_line;
public:
    Squer();
    Squer(int x, int y, int lenght);
    void show()override;
    void save(const char* path)override;
    void load(const char* path)override;
};
class Rectangle : public point, public shape {
protected:
    int lenght;
    int width;
public:
    Rectangle();
    Rectangle(int x, int y, int lenght, int width);
    void show()override;
    void save(const char* path)override;
    void load(const char* path)override;
};
class Circle : public point, public shape {
    int radius;
public:
    Circle();
    Circle(int x, int y, int radius);
    void show()override;
    void save(const char* path)override;
    void load(const char* path)override;
};
class Elipse : public Rectangle {
public:
    Elipse();
    Elipse(int x, int y, int lenght, int width);
    void show()override;
    void save(const char* path)override;
    void load(const char* path)override;
};

