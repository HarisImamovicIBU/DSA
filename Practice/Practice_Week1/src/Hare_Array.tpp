#include <iostream>
template <typename T>
Hare_Array<T>::Hare_Array(int size){
    this->size = size;
    data = new T[size]();
}
template <typename T>
Hare_Array<T>::~Hare_Array() {
    delete[] data;
}
template <typename T>
Hare_Array<T>::Hare_Array(const Hare_Array<T>& other){
    this->size = other.size;
    data = new T[size];
    std::copy(other.data, other.data + size, data);
}
template <typename T>
Hare_Array<T>& Hare_Array<T>::operator=(const Hare_Array<T>& other) {
    if(this!=&other){
        delete[] data;
        size = other.size;
        data = new T[size];
        std::copy(other.data, other.data + size, data);
    }
    return *this;
}
template <typename T>
Hare_Array<T>::Hare_Array(Hare_Array<T>&& other) noexcept{
    data = other.data;
    size = other.size;
    other.data = nullptr;
    other.size = 0;
}
template <typename T>
Hare_Array<T>& Hare_Array<T>::operator=(Hare_Array<T>&& other) noexcept{
    if(this!=&other){
        delete[] data;
        data = other.data;
        size = other.size;
        other.data = nullptr;
        other.size = 0;
    }
    return *this;
}
template <typename T>
void Hare_Array<T>::set(int index, T value){
    data[index] = value;
}
template <typename T>
T Hare_Array<T>::get(int index) const{
    return data[index];
}
template <typename T>
int Hare_Array<T>::getSize() const{
    return size;
}
template <typename T>
void Hare_Array<T>::printData() const {
    if(data==nullptr) {
        std::cout<<"The original array's data is set to nullptr, so no data for you!";
        return;
    }
    for (int i = 0; i < size; i++) {
        std::cout<<data[i]<<" ";
    }
    std::cout<<"\n";
}