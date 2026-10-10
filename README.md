*This project has been created as part of the 42 curriculum by adeestev.*

## Description

C++ Module 07 introduces generic programming using C++ templates. This module shifts the focus from object-oriented inheritance and polymorphism to compile-time polymorphism, enabling the creation of highly reusable functions and classes that can operate seamlessly across any data type without sacrificing strict type safety.

## Exercises Overview

 **Exercise 00: A few functions**

Requires the implementation of foundational function templates: swap, min, and max. These generic functions must be able to handle any data type (including complex instantiated classes) directly passed to them, relying on standard comparison operators.

**Exercise 01: Iter**

Introduces an iter function template capable of iterating over an array of any type and applying a specified function to each element. This exercise demonstrates how to pass function pointers as parameters to template functions, bridging generic programming with basic functional concepts.

**Exercise 02: Array**

Focuses on class templates by requiring the development of a dynamically allocated Array class. The implementation must behave similarly to standard C++ containers, featuring default construction, parameterized sizing, deep copy mechanics (via copy constructor and assignment operator), a size() function, and a custom exception thrown for out-of-bounds index access via the [] operator.

## Instructions

Each exercise is located within its own directory (ex00 to ex02) and must be compiled independently.

* **Compiler:** c++

* **Compilation Flags:** -Wall -Wextra -Werror -std=c++98

* **Execution:** Navigate to the respective directory and run make to build the executable. Run the generated binary to observe the output of the template instantiations.

## Resources

* **Documentation:** C++98 standard references for function templates, class templates, and generic programming paradigms.
