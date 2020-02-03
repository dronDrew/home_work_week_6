#include "shape.h"
point::point() {
    this->x = 0;
    this->y = 0;
};
point::point(int x, int y) {
    this->x = x;
    this->y = y;
};
shape::~shape() {};
Squer::Squer() :point() {
    this->lenght_line = 0;
};
Squer::Squer(int x, int y, int langth) :point(x, y) {
    this->lenght_line = langth;
}
void Squer::show() {
    std::cout << "Point of squer : " << point::x << " , " << this->y << std::endl;
    std::cout << "the langth of side : " << this->lenght_line << std::endl;
}
void Squer::save(const char* path) {
    std::ofstream file;
    file.open(path, std::ios::binary | std::ios::app);
    if (file.is_open()) {
        file << this->x << " ";
        file << this->y << " ";
        file << this->lenght_line << " ";
        file.close();
    }
    else {
        std::cout << "can`t open file\n";
    }
}
void Squer::load(const char* path) {
    std::ifstream file;
    file.open(path, std::ios::binary);
    if (file.is_open()) {
        file >> this->x;
        file >> this->y;
        file >> this->lenght_line;
        file.close();
    }
    else {
        std::cout << "can`t open file\n";
    }
}
Rectangle::Rectangle() :point() {
    this->width = 0;
    this->lenght = 0;
}
Rectangle::Rectangle(int x, int y, int lenght, int width) : point(x, y) {
    this->width = width;
    this->lenght = lenght;
}
void Rectangle::show() {
    std::cout << "Point of Reactangle : " << point::x << " , " << this->y << std::endl;
    std::cout << "the length : " << this->lenght << std::endl;
    std::cout << "the width : " << this->width << std::endl;
}
void Rectangle::save(const char* path) {
    std::ofstream file;
    file.open(path, std::ios::binary | std::ios::app);
    if (file.is_open()) {
        file << this->x << " ";
        file << this->y << " ";
        file << this->lenght << " ";
        file << this->width << " ";
        file.close();
    }
    else {
        std::cout << "can`t open file\n";
    }
}
void Rectangle::load(const char* path) {
    std::ifstream file;
    file.open(path, std::ios::binary);
    if (file.is_open()) {
        file >> this->x;
        file >> this->y;
        file >> this->lenght;
        file >> this->width;
        file.close();
    }
    else {
        std::cout << "can`t open file\n";
    }
}
Circle::Circle() :point() {
    this->radius = 0;
};
Circle::Circle(int x, int y, int radius) :point(x, y) {
    this->radius = radius;
}
void Circle::show() {
    std::cout << "Point of center : " << point::x << " , " << this->y << std::endl;
    std::cout << "the radius : " << this->radius << std::endl;
}
void Circle::save(const char* path) {
    std::ofstream file;
    file.open(path, std::ios::binary | std::ios::app);
    if (file.is_open()) {
        file << this->x << " ";
        file << this->y << " ";
        file << this->radius << " ";
        file.close();
    }
    else {
        std::cout << "can`t open file\n";
    }
}
void Circle::load(const char* path) {
    std::ifstream file;
    file.open(path, std::ios::binary);
    if (file.is_open()) {
        file >> this->x;
        file >> this->y;
        file >> this->radius;
        file.close();
    }
    else {
        std::cout << "can`t open file\n";
    }
}
Elipse::Elipse() :Rectangle() {}
Elipse::Elipse(int x, int y, int lenght, int width) : Rectangle(x, y, lenght, width) {}
void Elipse::show() {
    std::cout << "Elipse parametr\n" << std::endl;
    std::cout << "Point of Reactangle : " << point::x << " , " << this->y << std::endl;
    std::cout << "the length : " << this->lenght << std::endl;
    std::cout << "the width : " << this->width << std::endl;
}
void Elipse::save(const char* path) {
    std::ofstream file;
    file.open(path, std::ios::binary | std::ios::app);
    if (file.is_open()) {
        file << this->x << " ";
        file << this->y << " ";
        file << this->lenght << " ";
        file << this->width << " ";
        file.close();
    }
    else {
        std::cout << "can`t open file\n";
    }
}
void Elipse::load(const char* path) {
    std::ifstream file;
    file.open(path, std::ios::binary);
    if (file.is_open()) {
        file >> this->x;
        file >> this->y;
        file >> this->lenght;
        file >> this->width;
        file.close();
    }
    else {
        std::cout << "can`t open file\n";
    }
}
