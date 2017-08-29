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
                T* pItem = &(top->item);
                //save the node to destroy
                Node* oldTop = top;
                //update the top
                top = top->prev;
                //destroy the oldTop
                delete oldTop;
                //update size
                size--;
                //return the item
                return pItem;
            }
            return NULL;
        }

    template<class T>
        void stack<T> :: push(const T& newItem){
            Node* newNode;
            try{
                newNode = new Node();
            }catch( std::bad_alloc &ba ){
                throw ba;
            }
            //setup node
            newNode->prev = top;
            newNode->item = newItem;

            //setup stack
            top = newNode;
            size++;
        }

    template<class T>
        bool stack<T> :: isFull(){
            Node* newNode;
            try{
                newNode = new Node();
            }catch( std::bad_alloc &ba ){
                return true;
            }
            delete newNode;
            return false;
        }
}
