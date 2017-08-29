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
}
