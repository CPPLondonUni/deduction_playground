
# C++ London University Type Deduction Playground #


This is a mini-project set up to allow you to experiment with template
argument deduction.

The file `examples.cpp` contains some example function templates, and
some calling code which instantiates them with different argument types.
The called functions print the deduced type of their template arguments.

Use the deduction playground to play around with argument deduction so you
have a firm idea of how it works. Here are a few things you could try:

 * What happens if you use a non-const `T&` as a function parameter?
 * What happens if you use a `T*` as a function parameter? `const T*`?
 * What happens if you use a `std::vector<T>` as a function parameter?
 * What happens if you use a function parameter with a default argument? Does it
   get deduced?
 * In what circumstances does `T` get deduced as a reference?
 

