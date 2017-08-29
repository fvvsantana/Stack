#include <iostream>
#include "stack.hpp"

using namespace std;

int main(){
    adt::stack<float> s;

    //testing initial conditions:
    cout << "create" << '\n';
    cout << "isEmpty: " << s.isEmpty() << "\n";
    cout << "getSize: " << s.getSize() << "\n";
    cout << "showTop: " << s.showTop() << "\n";
    cout << "isFull: " << s.isFull() << "\n\n";


    s.push(8.5);
    s.push(8.5);
    s.push(8.5);
    s.push(8.5);
    s.push(8.5);
    s.push(7.5);
    s.push(9.5);

    cout << "push" << '\n';

    cout << "isEmpty: " << s.isEmpty() << "\n";
    cout << "getSize: " << s.getSize() << "\n";
    cout << "showTop: " << *(s.showTop()) << "\n";
    cout << "isFull: " << s.isFull() << "\n\n";

    s.pop();

    cout << "pop" << '\n';

    cout << "isEmpty: " << s.isEmpty() << "\n";
    cout << "getSize: " << s.getSize() << "\n";
    cout << "showTop: " << *(s.showTop()) << "\n";
    cout << "isFull: " << s.isFull() << "\n";
    
    return 0;
}
