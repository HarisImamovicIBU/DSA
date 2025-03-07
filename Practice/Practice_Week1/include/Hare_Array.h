#ifndef HARE_ARRAY_H
#define HARE_ARRAY_H
#include <iostream>
template <typename T>
class Hare_Array {
private:
    T* data;
    int size;
public:
    //Constructor
    explicit Hare_Array(int size);
    //Destructor
    ~Hare_Array();
    //Copy Constructor
    Hare_Array(const Hare_Array<T>& other);
    //Copy Assignment
    Hare_Array<T>& operator=(const Hare_Array<T>& other);
    //Move Constructor
    Hare_Array(Hare_Array<T>&& other) noexcept;
    //Move Assignment Operator
    Hare_Array<T>& operator=(Hare_Array<T>&& other) noexcept;
    //Getters&Setters
    void set(int index, T value);
    T get(int index) const;
    int getSize() const;
    void printData() const;
};

#include "../src/Hare_Array.tpp"
#endif
