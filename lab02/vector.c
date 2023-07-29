// Copyright 2023 10X Engineers JUNAID
#include <stdlib.h>
#include <stdio.h>
#include "/home/user3/C Language/su21-lab-starter/lab02/vector.h"


/* Define what our struct is */
struct vector_t {
size_t size;
int *data;
};


/* Utility function to handle allocation failures. In thi case we print a message and exit. */
static void allocation_failed() {
fprintf(stderr, "Out of memory.\n");
exit(1);
}


/* Bad example of how to create a new vector */
struct vector_t *bad_vector_new() {
/* Create the vector and a pointer to it */
struct vector_t *retval, v;
retval = &v;


/* Initialize attributes */
retval->size = 1;
retval->data = malloc(sizeof(int));
if (retval->data == NULL) {
allocation_failed();
}


retval->data[0] = 0;
return retval;
}


/* Another suboptimal way of creating a vector */
struct vector_t also_bad_vector_new() {
/* Create the vector */
struct vector_t v;


/* Initialize attributes */
v.size = 1;
v.data = malloc(sizeof(int));
if (v.data == NULL) {
allocation_failed();
}
v.data[0] = 0;
return v;
}


// Function to create a new vector
struct vector_t *vector_new() {
struct vector_t *retval;


// Allocate memory on the heap to hold the struct vector_t
retval = (struct vector_t*)malloc(sizeof(struct vector_t));
if (retval == NULL) {
allocation_failed();
}


// Allocate memory for a single integer in the data array
retval->data = (int*)malloc(sizeof(int));
if (retval->data == NULL) {
// If memory allocation fails, free the previously allocated struct vector_t
free(retval);
allocation_failed();
}


// Initialize the size to 1 and the first element in the data array to 0
retval->size = 1;
retval->data[0] = 0;


return retval;
}


// Function to get the value at a specified location in the vector
int vector_get(struct vector_t *v, size_t loc) {
if (v == NULL) {
fprintf(stderr, "vector_get: passed a NULL vector.\n");
abort();
}


// If the requested location is beyond the vector size, return 0
if (v->size <= loc) {
return 0;
}


// Otherwise, return the value at the specified location
return v->data[loc];
}


// Function to free the memory allocated for the vector
void vector_delete(struct vector_t *v) {
if (v != NULL) {
free(v->data);
free(v);
}
}


// Function to set a value at a specified location in the vector
void vector_set(struct vector_t *v, size_t loc, int value) {
if (v == NULL) {
fprintf(stderr, "vector_set: passed a NULL vector.\n");
abort();
}


// If the location is greater than or equal to the vector size, resize the vector
if (loc >= v->size) {
// Reallocate memory for the data array with a larger size
int *new_data = (int*)realloc(v->data, (loc + 1) * sizeof(int));
if (new_data == NULL) {
allocation_failed();
}
v->data = new_data;


// Initialize the new elements to 0
for (size_t i = v->size; i <= loc; i++) {
v->data[i] = 0;
}


// Update the size of the vector
v->size = loc + 1;
}
// Set the value at the specified location
v->data[loc] = value;
}


