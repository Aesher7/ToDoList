#include <iostream>

int main() {
    // Ask the user to enter three integer values
    int value1, value2, value3;
    std::cout << "Enter three integer values: ";
    std::cin >> value1 >> value2 >> value3;

    // Create integer pointers and allocate dynamic memory
    int *ptr1 = new int(value1);
    int *ptr2 = new int(value2);
    int *ptr3 = new int(value3);

    // Display the contents of variables and pointers
    std::cout << "\nContents of Variables:\n";
    std::cout << "Value 1: " << value1 << "\n";
    std::cout << "Value 2: " << value2 << "\n";
    std::cout << "Value 3: " << value3 << "\n";

    std::cout << "\nContents of Pointers:\n";
    std::cout << "Pointer 1: " << *ptr1 << "\n";
    std::cout << "Pointer 2: " << *ptr2 << "\n";
    std::cout << "Pointer 3: " << *ptr3 << "\n";

    // Deallocate dynamic memory using delete operator
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
