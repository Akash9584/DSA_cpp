#include <iostream>
#include <list>
using namespace std;

int main() {
    // List create
    list<int> numbers;

    // Elements add karna
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_front(5);

    // List print karna
    cout << "List elements: ";
    for (int x : numbers) {
        cout << x << " ";
    }
    cout << endl;

    // Remove element
    numbers.remove(20);  // value 20 ko delete karega

    // After removal
    cout << "After removing 20: ";
    for (int x : numbers) {
        cout << x << " ";
    }
    cout << endl;

    // Size check
    cout << "List size: " << numbers.size() << endl;

    return 0;
}
