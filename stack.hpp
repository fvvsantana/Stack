#ifndef STACK_HPP
#define STACK_HPP

namespace adt{
    template<class T>
        class stack{
            private:
                class Node{
                    public:
                        T item;
                        Node* prev;
                };

                Node* top;
                int size;

            public:
                //constructor
                stack();

                //destructor
                ~stack();

                //empty the stack
                void empty();

                //check if the stack is empty
                bool isEmpty();

                //get the size of the stack
                int getSize();

                //show the element of the top of the stack
                T* showTop();
                
                //take the first element of the stack
                T* pop();
                
                //put the newItem on the top of the stack
                void push(const T& newItem);
                
                //check if the stack is full
                bool isFull();
        };

}

//template implementations:
#include "stackTemplates.hpp"
#endif /* end of include guard: STACK_HPP */
