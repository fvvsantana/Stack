#include <iostream>
#include "stack.hpp"

using namespace std;

int main(){
    adt::stack<int> s;

    //testing initial conditions:
    cout << "isEmpty: " << s.isEmpty() << "\n";
    cout << "getSize: " << s.getSize() << "\n";
    cout << "showTop: " << s.showTop() << "\n";
    cout << "isFull: " << s.isFull() << "\n";


    s.push(8);

    cout << "push" << '\n';

    cout << "isEmpty: " << s.isEmpty() << "\n";
    cout << "getSize: " << s.getSize() << "\n";
    cout << "showTop: " << *(s.showTop()) << "\n";
    cout << "isFull: " << s.isFull() << "\n";

    s.pop();

    cout << "hello" << '\n';

    cout << "isEmpty: " << s.isEmpty() << "\n";
    cout << "getSize: " << s.getSize() << "\n";
    cout << "showTop: " << s.showTop() << "\n";
    cout << "isFull: " << s.isFull() << "\n";
    
    return 0;
}
