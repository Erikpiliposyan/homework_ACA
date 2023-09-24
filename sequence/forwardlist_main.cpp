#include <iostream>
#include "forward_List.h"


int main() {
    // Create a List of integers
    List<int> myList;

    // Add elements to the list
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    // Print the list
    std::cout << "List elements: ";
    myList.print();

    // Access and print the front and back elements
    std::cout << "Front element: " << myList.front() << std::endl;
    std::cout << "Back element: " << myList.back() << std::endl;

    // Remove an element from the back
    myList.pop_back();

    // Insert an element at a specific position
    myList.insert(1, 4);

    // Print the modified list
    std::cout << "Modified list: ";
    myList.print();

    // Reverse the list
    myList.reverseList();

    // Print the reversed list
    std::cout << "Reversed list: ";
    myList.print();

    // Check for the presence of a cycle
    if (myList.hasCycle()) {
        std::cout << "The list has a cycle." << std::endl;
    } else {
        std::cout << "The list does not have a cycle." << std::endl;
    }

    // Create a cycle in the list
    myList.makeCycle(1);

    // Check for the presence of a cycle after creating one
    if (myList.hasCycle()) {
        std::cout << "The list has a cycle." << std::endl;
    } else {
        std::cout << "The list does not have a cycle." << std::endl;
    }

    // Clean up the list
    myList.clean();

    return 0;
}
