#include <iostream>
#include "stack.hpp"

using namespace std;

int main(){
    adt::stack<int> s;

    //testing initial conditions:
    cout << "isEmpty: " << s.isEmpty() << "\n";
    cout << "getSize: " << s.getSize() << "\n";
    cout << "showTop: " << s.showTop() << "\n";
    int oito = 8;

    s.push(oito);

    cout << "push" << '\n';

    cout << "isEmpty: " << s.isEmpty() << "\n";
    cout << "getSize: " << s.getSize() << "\n";
    cout << "showTop: " << *(s.showTop()) << "\n";

    s.pop();

    cout << "hello" << '\n';

    cout << "isEmpty: " << s.isEmpty() << "\n";
    cout << "getSize: " << s.getSize() << "\n";
    cout << "showTop: " << s.showTop() << "\n";
    
    return 0;
}
