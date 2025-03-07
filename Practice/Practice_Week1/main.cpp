#include<iostream>
#include "../include/Hare_Array.h"
int main() {
    int n;
    std::cout<<"Enter the number of elements in the Hare_Array: ";
    std::cin>>n;
    Hare_Array<int> arr(n);
    for(int i=0;i<n;i++) {
        int m;
        std::cout<<"Enter the element "<<i<<": ";
        std::cin>>m;
        arr.set(i,m);
    }
    std::cout<<"Our original array: ";
    arr.printData();
    std::cout<<"-----------------------------"<<std::endl;
    Hare_Array<int> copy_array = arr;
    std::cout<<"Our copied array: ";
    copy_array.printData();
    std::cout<<"-----------------------------"<<std::endl;
    Hare_Array<int> move_array = std::move(arr);
    std::cout<<"Our moved array: ";
    move_array.printData();
    std::cout<<"Original array after move: "<<std::endl;
    arr.printData(); //won't print out anything because of data=nullptr;
    return 0;
}
