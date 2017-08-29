#include <iostream>
#include "stack.hpp"

using namespace std;

int main(){
    adt::stack<int> s;

    //testing initial conditions:
    cout << s.isEmpty() << "\n";
    cout << s.getSize() << "\n";
    cout << s.showTop() << "\n";

    
    return 0;
}
