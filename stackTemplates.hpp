namespace adt{

    template<class T>
        stack<T> :: stack(){
            top = NULL;
            size = 0;
        }

    template<class T>
        stack<T> :: ~stack(){
            Node* aux;
            while(top){
                aux = top;
                top = top->prev;
                delete aux;
            }
        }

    template<class T>
        void stack<T> :: empty(){
            Node* aux;
            while(top){
                aux = top;
                top = top->prev;
                delete aux;
            }
            size = 0;
        }

    template<class T>
        bool stack<T> :: isEmpty(){
            return top==NULL;
        }

    template<class T>
        int stack<T> :: getSize(){
            return size;
        }

    template<class T>
        T* stack<T> :: showTop(){
            if(top){
                return &(top->item);
            }
            return NULL;
        }

    template<class T>
        T* stack<T> :: pop(){
            if(top){
                //save the item
                T* item = &(top->item);
                //save the node to destroy
                Node* oldTop = top;
                //update the top
                top = top->prev;
                //destroy the oldTop
                delete oldTop;
                //update size
                size--;
                //return the item
                return item;
            }
            return NULL;
        }


}
