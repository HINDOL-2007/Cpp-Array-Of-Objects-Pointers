# 🪂 C++ Dynamic Object Arrays & Pointer Traversal

## 📖 About the Project
This project explores Heap memory allocation for object arrays in C++. It demonstrates how to instantiate multiple class objects dynamically using pointers and iterate through them using pointer arithmetic, avoiding standard array indexing.

## ✨ Features
*   **Dynamic Arrays of Objects:** Uses `new ClassName[size]` to allocate contiguous memory blocks for objects at runtime.
*   **Pointer Traversal:** Utilizes a temporary pointer (`tempPtr++`) to traverse the memory block, ensuring the original base pointer remains intact.
*   **The Arrow Operator:** Uses `->` to safely dereference object pointers and invoke member functions.
*   **Strict Memory Management:** Ensures all dynamic memory is safely returned to the OS using `delete` and `delete[]` on the unmodified base addresses.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Array of Objects, Pointer Arithmetic, Arrow Operator, Heap Allocation, Memory Management.

## 🛠️ How to Run
1. Clone this repository and compile:
   ```bash
   g++ dynamic_arrays.cpp -o dynamic_arrays
