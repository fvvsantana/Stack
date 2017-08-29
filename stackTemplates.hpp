namespace adt{

    //constructor
    template<class T>
        stack<T> :: stack(){
            top = NULL;
            size = 0;
        }

    //destructor
    template<class T>
        stack<T> :: ~stack(){
            Node* aux;
            while(top){
                aux = top;
                top = top->prev;
                delete aux;
            }
        }

    //empty the stack
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

    //check if the stack is empty
    template<class T>
        bool stack<T> :: isEmpty(){
            return top==NULL;
        }

    //get the size of the stack
    template<class T>
        int stack<T> :: getSize(){
            return size;
        }

    //show the element of the top of the stack
    template<class T>
        T* stack<T> :: showTop(){
            if(top){
                return &(top->item);
            }
            return NULL;
        }

    //take the first element of the stack
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

    //put the newItem on the top of the stack
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

    //check if the stack is full
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
