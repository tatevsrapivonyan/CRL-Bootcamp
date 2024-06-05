# Vector Implementation

## Overview

This project is a simple implementation of a vector (dynamic array) data structure in C++. The vector provides dynamic resizing, efficient access and modification, and basic operations for managing elements.

## Objectives

- **Dynamic Resizing**: Automatically resize the vector to accommodate more elements.
- **Efficient Access and Modification**: Provide constant time access and modification to elements by their index.
- **Memory Management**: Handle memory efficiently to minimize overhead during resizing.
- **Basic Operations**: Implement essential operations such as adding, removing, and accessing elements.

## Features

1. **Initialization**
   - Create an empty vector.
   - Create a vector with an initial capacity.

2. **Insertion**
   - `push_back(element)`: Add an element to the end of the vector.
   - `insert(index, element)`: Insert an element at a specific index, shifting subsequent elements.

3. **Deletion**
   - `pop_back()`: Remove the last element from the vector.
   - `erase(index)`: Remove the element at a specific index, shifting subsequent elements.

4. **Access**
   - `at(index)`: Access the element at a specific index.
   - `operator[]`: Overload the bracket operator for element access.

5. **Capacity Management**
   - `size()`: Return the number of elements in the vector.
   - `capacity()`: Return the current capacity of the vector.
   - `resize(new_size)`: Resize the vector to a new size.
   - `reserve(new_capacity)`: Request a change in capacity to at least `new_capacity`.

6. **Utility Functions**
   - `clear()`: Remove all elements from the vector.
   - `empty()`: Check if the vector is empty.