The structure in C is a user-defined data type that can be used to group items of possibly different types into a single type. The struct keyword is used to define the structure in the C programming language. The items in the structure are called its member and they can be of any valid data type
Define a new type struct dog with the following elements:
• name , type = char *
• age , type = float
• owner , type = char *
task 1:
Write a function that initialize a variable of type struct dog
• Prototype: void init_dog(struct dog *d, char *name, float age, char *owner)
task 2:
Write a function that prints a struct dog
• Prototype: void print_dog(struct dog *d);
• Format: see example bellow
• You are allowed to use the standard library
• If an element of d is NULL , print (nil) instead of this element. (if name is NULL , print Name:
(nil) )
• If d is NULL print nothing
task 3:
Define a new type dog_t as a new name for the type struct dog .
task 4 :
Write a function that frees dogs.
• Prototype: void free_dog(dog_t *d)
