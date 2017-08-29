#ifndef STACK_HPP
#define STACK_HPP

//#include <iostream>
//#include <string>
//#include <typeinfo>
//#include <iomanip>
//#include <new>
//#include <stdexcept>             

using namespace std;

namespace adt{
    template<class T>
        class stack{
            private:
                class Node{
                    public:
                        T& item;
                        Node* prev;
                };

                Node* top;
                int size;

            public:
                stack();//
                ~stack();//
                bool isEmpty();//
                bool isFull();
                void push(T& newItem);
                T& pop();
                T* showTop();//
                void empty();//
                int getSize();//
        };

}
//template implementations:
#include "stackTemplates.hpp"
#endif /* end of include guard: STACK_HPP */
