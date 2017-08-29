namespace adt{

    template<class T>
        stack<T> :: stack(){
            top = NULL;
            size = 0;
        }

    template<class T>
        stack<T> :: ~stack(){
            empty();
        }

    template<class T>
        void stack<T> :: empty(){
            Node* aux;
            while(top){
                aux = top;
                top = top->prev;
                delete aux;
            }
        }
}
