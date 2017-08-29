#ifndef STACK_HPP
#define STACK_HPP

using namespace std;

namespace adt{
    template<class T>
        class stack{
            private:
                class Node{
                    T& item;
                    Node* prev;
                }

                Node* top = nullptr;
                int size = 0;

            public:
                bool isEmpty();
                bool isFull();
                void push(T& newItem);
                T& pop();
                T& top();
                void empty();
        }

}
//template implementations:
#include "stackTemplates.hpp"
#endif /* end of include guard: STACK_HPP */
