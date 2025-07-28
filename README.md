# Hash Tables - C Programming

This project covers the implementation of basic hash table operations using C.  
It focuses on creating a custom hash table data structure and implementing common functions such as insert, retrieve, print, and delete.

## 📁 Project Structure

- `0-hash_table_create.c`: Creates a new hash table.
- `1-djb2.c`: Hash function using the **djb2** algorithm.
- `2-key_index.c`: Maps a key to an index in the hash table array.
- `3-hash_table_set.c`: Adds or updates a key/value pair in the hash table.
- `4-hash_table_get.c`: Retrieves the value associated with a key.
- `5-hash_table_print.c`: Prints all key/value pairs in the hash table.
- `6-hash_table_delete.c`: Deletes the hash table and frees memory.

## 📚 Concepts Covered

- Hash functions and collisions
- Handling collisions using chaining (linked lists)
- Memory allocation and deallocation in C
- Structs and pointers

## 🧪 Compilation

Each file can be compiled using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hash_table_test

👤 Author
Kevin Voka
GitHub: kevin10v