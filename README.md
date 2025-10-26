# C - Sorting Algorithms & Big O

> A project from **Holberton School – Low-Level Programming** focused on implementing and understanding different **sorting algorithms** and analyzing their performance using **Big O notation**.

**Team:** Fahad Abdulaziz Alghamdi & Nabel Nasser Aldwese

---

## Project Overview

This project introduces several classic sorting algorithms and teaches how to:
- Implement sorting algorithms in C.
- Analyze time complexity using Big O notation.
- Identify the best algorithm based on input size and stability.
- Understand and compare algorithmic efficiency.

---

## Learning Objectives

At the end of this project, you should be able to explain:
1. At least four different sorting algorithms.
2. What Big O notation is and how to evaluate time complexity.
3. How to select the best sorting algorithm for a given input.
4. What a stable sorting algorithm is.

---

## Implemented Files

| File | Function | Description |
|------|-----------|-------------|
| `0-bubble_sort.c` | `void bubble_sort(int *array, size_t size);` | Sorts an array using the Bubble Sort algorithm. |
| `1-insertion_sort_list.c` | `void insertion_sort_list(listint_t **list);` | Sorts a doubly linked list using Insertion Sort. |
| `2-selection_sort.c` | `void selection_sort(int *array, size_t size);` | Sorts an array using Selection Sort. |
| `3-quick_sort.c` | `void quick_sort(int *array, size_t size);` | Sorts an array using Quick Sort with the Lomuto partition scheme. |
| `print_array.c` / `print_list.c` | Helper functions to print arrays and linked lists. |
| `sort.h` | Header file containing all prototypes and struct definitions. |
| `0-O`, `1-O`, `2-O`, `3-O` | Files describing Big O time complexities for each algorithm. |

---

## Environment and Requirements

- **OS:** Ubuntu 20.04 LTS  
- **Compiler:** `gcc`  
- **Compilation flags:**
