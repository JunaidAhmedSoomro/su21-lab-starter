// Copyright 2023 10X Engineers JUNAID
#ifndef VECTOR_H
#define VECTOR_H
#include <stddef.h>
// Function to create a new vector and return a pointer to it
struct vector_t *vector_new();
// Function to get the value at a specified location in the vector
int vector_get(struct vector_t *v, size_t loc);
// Function to free the memory allocated for the vector
void vector_delete(struct vector_t *v);
// Function to set a value at a specified location in the vector
void vector_set(struct vector_t *v, size_t loc, int value);
#endif /* VECTOR_H */
