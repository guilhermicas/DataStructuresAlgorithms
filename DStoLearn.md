## Data Structures and Algorithms Without Extras

### Why Learn DSA?

- Write optimized and scalable code!
  Once you have knowledge about different data structures and algorithms, you can determine which data structure and algorithm to choose in various conditions.

- Effective use of time and memory!
  Having Knowledge about data structures and algorithms will help you write codes that run faster and require less storage.

#### Lesson nr.1 Formal definition of an abstract algorithm

1. Input and output should be defined precisely.
2. Each step in the algorithm should be clear and unambiguous.
3. Algorithms should be most effective among many different ways to solve a problem.
4. An algorithm shouldn't include computer code. Instead, the algorithm should be written in such a way that it can be used in different programming languages.

TLDR: Pseudocode

#### Informal definition of algorithm

An algorithm is a solution to a problem, defined in steps.

### Scalability

Scalability is the quality of an algorithm/system to handle the problem of larger size.

## Stack

Why a stack should be made with an array and differences between array implementation and linked-list implementation

1. Array Implementation
   Pros:

   - In the array implementation, an array is used to store the data as oposed to linked-list, this makes it that insert and pop are O(1), avoiding traversing a whole LinkedList.

   Cons:

   - The size is limited by creation in the array implementation, in the linked list it has dinamic memory. There is a fix:
     - You could implement the Stack in a way that if the max memory of the array is reached, a new array with double the size is created and data in the smaller array is copied into the new array, and then append the next top value.
       The problem is that you have to have a lot of memory. This makes it that it only scales vertically.

## Queue

## Linked List

## Hash Table

## Heap

## Trees

- Tree
- Binary Tree
- Full Binary Tree
- Perfect Binary Tree
- Binary Search Tree
- AVL Tree

level 2

- B Tree
- B+ Tree
- Red Black Tree

## Graphs :)

- Graph DS
- Spanning Tree
- Adjacency Matrix
- Adjacency List

## Sorting and Searching Algorithms

- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Counting Sort
- Radix Sort
- Bucket Sort
- Heap Sort
- Shell Sort
- Linear Sort
- Binary Sort

## Greedy Algorithms

- Greedy Algorithm
- Ford-Fulkerson Algorithm
- Dijkstra's Algorithm
- Kruskal's Algorithm
- Prim's Algorithm
- Huffman Code

## Dynamic Programming

- Dynamic Programming
- Floyd Warshall Algorithm
- Longest Common Subsequence

## Other

- Backtracking Algorithm
- Rabin-Karp Algorithm
