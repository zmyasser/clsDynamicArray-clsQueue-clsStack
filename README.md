# 🚀 Custom Data Structures in C++  
### 🧠 Dynamic Array • Queue • Stack (From Scratch)

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue)
![OOP](https://img.shields.io/badge/Concept-OOP-green)
![Data Structures](https://img.shields.io/badge/Topic-Data%20Structures-orange)

---

## 📌 Overview

This project is a **custom implementation of fundamental data structures in C++**, built completely from scratch without using STL containers.

It demonstrates strong understanding of:

- Memory management 🧩  
- Templates (Generic Programming) ⚙️  
- Object-Oriented Programming (OOP) 🏗️  
- Data Structure design 📚  

---

## 🧱 Implemented Structures

### 🔹 1. Dynamic Array (`clsDynamicArray`)
A fully functional alternative to `std::vector`.

#### ✨ Features:
- Dynamic resizing 📏  
- Insert / Delete operations ➕➖  
- Reverse 🔄  
- Search 🔍  
- Index-based access 📍  

---

### 🔹 2. Queue (`clsMyQueue`)
Built on top of the dynamic array.

#### ✨ Features:
- FIFO (First In First Out) 🔁  
- `push()` → Add to back  
- `pop()` → Remove from front  
- `front()` / `back()` access  
- Reverse & insert operations  

---

### 🔹 3. Stack (`clsMyStack`)
Implemented using the queue/array structure.

#### ✨ Features:
- LIFO (Last In First Out) 📚  
- `push()` → Insert at top  
- `Top()` → Access top element  
- `Bottom()` → Access bottom element  
- Efficient operations using front insertion  

---

## ⚙️ Technologies Used

- 💻 **C++ (Modern C++)**
- 🧠 Templates
- 🧩 Manual Memory Management (`new` / `delete`)
- 🏗️ Object-Oriented Design

---

## 📂 Project Structure
📁 Project
│── clsDynamicArray.h
│── clsMyQueue.h
│── clsMyStack.h
│── main.cpp (optional test file)

---

## 🧪 Example Usage

```cpp
#include "clsMyStack.h"

int main()
{
    clsMyStack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top: " << stack.Top() << std::endl;     // 30
    std::cout << "Bottom: " << stack.Bottom() << std::endl; // 10

    stack.pop();

    stack.Print();

    return 0;
}
