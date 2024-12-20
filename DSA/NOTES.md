 -----------------------------------------------------------------------------------------------------------------------------------------------
 DATE: 21/08/2024
 -----------------------------------------------------------------------------------------------------------------------------------------------

 DATA STRUCTURE:
    -Data Struture is about how data can be store and use in different Strutures.

ALGORITHEM:
    -Algorithm is a step-by-step procedure for solving a problem.

ASYMPTOTIC NOTATIOIN:
    -Asymptotic notation is used to describe the time and space complexity of an algorithm.

    -There are mainly three type of notation:
        1. Big O notation: It is used to describe the upper bound or wrost case of an algorithm's time or
           space complexity.

        2. Big Ω notation: It is used to describe the lower bound of an algorithm's time or
           space complexity.

        3. Big Θ notation: It is used to describe the exact time or space complexity of an algorithm.


    -There are mainly two types of complexity for any program:
        1. Time complexity: It is the amount of time an algorithm takes to complete as a function of
           the size of the input.
        
        2. Space complexity: It is the amount of memory an algorithm takes to complete as a function of
           the size of the input.
    
        
                                       COMPLEXITY OF PROGRAM

      NOTATIOIN           |        NAME             |              DESCRIPTION
      --------------------|-------------------------|-----------------------------------------------------------------------------------
      O(1)                | Constant                | The time taken by the algorithm is constant and does
                          |                         | not depend on the size of the input.
      --------------------|-------------------------|-----------------------------------------------------------------------------------
      O(log n)            | Logarithmic             | The time taken by the algorithm is proportional
                          |                         | to the logarithm of the size of the input.
      --------------------|-------------------------|-----------------------------------------------------------------------------------
      O(n)                | Linear                  | The time taken by the algorithm is proportional
                          |                         | to the size of the input.
      --------------------|-------------------------|-----------------------------------------------------------------------------------
      O(n log n)          | Linearithmic            | The time taken by the algorithm is
                          |                         | proportional to the product of the size of the input and its logarithm
      --------------------|-------------------------|-----------------------------------------------------------------------------------
      O(n^2)              | Quadratic               | The time taken by the algorithm is proportional
                          |                         | to the square of the size of the input.
      --------------------|-------------------------|-----------------------------------------------------------------------------------
      O(2^n)              | Exponential             | The time taken by the algorithm is proportional
                          |                         | to 2 raised to the power of the size of the input.
      --------------------|-------------------------|-----------------------------------------------------------------------------------
      O(n!)               | Factorial               | The time taken by the algorithm is proportional
                          |                         | to the factorial of the size of the input.
      --------------------|-------------------------|-----------------------------------------------------------------------------------
      

 -----------------------------------------------------------------------------------------------------------------------------------------------
 DATE: 22/08/2024
 -----------------------------------------------------------------------------------------------------------------------------------------------

LINKEDLIST:
   -A linked list is a linear data structure where each element is a separate object, known as a node.
   -Linklist nodes are randomly stored in the memory.
   -link field of Linklist is of self reerential type.

   -Each node contains two items:
      1. The data, and
      2. A reference (or link) to the next node in the sequence.

      -------    -------    -------    ---------
      |10|1k|--->|20|2k|--->|30|3k|--->|40|NULL|
      -------    -------    -------    ---------

   LinkedList over Array:
   
      -Dynamic memory allocation: Linked list can grow or shrink as needed.
      -Insertion and deletion: Linked list allows for efficient insertion and deletion of nodes at any position.
      -Memory usage: Linked list uses more memory than arrays because each node has a reference to the
       next node.
      -Random access: Linked list does not support random access, you have to traverse the list from
       the beginning to access a specific node.
      -Cache performance: Linked list can have poor cache performance because the memory is not contiguous.
      -Traversal: Linked list can be traversed in both forward and backward directions.
      -Search: Linked list can be searched in both forward and backward directions.
      -Sorting: Linked list can be sorted in both forward and backward directions.
      -Reversing: Linked list can be reversed in both forward and backward directions.
   

 -----------------------------------------------------------------------------------------------------------------------------------------------
 DATE: 23/08/2024
 -----------------------------------------------------------------------------------------------------------------------------------------------


DOUBLY LINKEDLIST:
   -A doubly linked list is a type of linked list in which each node has two pointers,
      one pointing to the next node and the other pointing to the previous node.
   -This allows for efficient insertion and deletion of nodes at any position in the list.
   -It also allows for traversal in both forward and backward directions.
   -It is used in many applications such as database systems, file systems, and memory management.
   -The node containing NULL at there "next" field that is called Tail of list.
   -The node containing NULL at there "previous" field that is called Head of list.



CIRCULAR LINKEDLIST:
   -A circular linked list is a type of linked list in which the last node points back to
   the first node, forming a circle.
   -It is used in many applications such as circular buffers, circular queues, and
   circular stacks.

   
VECTOR: 
   -A vector is a dynamic array that can grow or shrink as needed.
   -It is used to store a collection of elements of the same data type.
   -It is implemented as a contiguous block of memory.
   -Vector is define inside <vector> header file.
   -Vector is a part of C++ Standard Template Library (STL).
   -Vector is based on last in first out (LIFO) algorithm.

   Pre-defind methods of vector:
      -push_back(): Adds an element to the end of the vector.
      -pop_back(): Removes the last element from the vector.
      -insert(): Inserts an element at a specified position in the vector.
      -erase(): Removes an element at a specified position in the vector.
      -size(): Returns the number of elements in the vector.
      -capacity(): Returns the maximum number of elements the vector can hold.
      -empty(): Checks if the vector is empty.
      -at(): Returns the element at a specified position in the vector.
      -front(): Returns the first element in the vector.
      -back(): Returns the last element in the vector.
      -begin(): Returns an iterator(reference) pointing to the first element in the vector.
      -end(): Returns an iterator pointing(reference) to the end of the vector.
      -clear(): Removes all elements from the vector.
      -resize(): Changes the size of the vector to a specified value.
      -reserve(): Changes the capacity of the vector to a specified value.
      -swap(): interchange all elements of two vectors.
   
      -Vector is class template inside memory, therefore sizeof() operator return the size of class vector.

PAIRS:
   -A pair is a class template that represents a collection of two values.
   -It is used to store two values of different data types.
   
   Syntax:
      pair <data_type, data_type> p;

   -we can create array of pairs to store some number of data inside it.


 -----------------------------------------------------------------------------------------------------------------------------------------------
 DATE: 27/08/2024
 -----------------------------------------------------------------------------------------------------------------------------------------------

STACK:
   -A stack is a linear data structure that follows the LIFO (Last In First Out).
   -It is a type of abstract data type (ADT) that uses the principle of last in
    first out to access the elements.
   -Stack is a collection of elements that are added and removed from the top of the stack.
   -Stack is a part of C++ Standard Template Library (STL).
   -Stack is implemented as a class template inside <stack> header file.
   -Stack is a dynamic data structure that can grow or shrink as needed.
   -Stack is a non-associative data structure, meaning that the order of elements is
    not preserved.
    
   Main operations:
      -push(): Adds an element to the top of the stack.
      -pop(): Removes an element from the top of the stack.
      -top(): Returns the element at the top of the stack.
      -size(): Return size of stack.
      -empty(): Checks if the stack is empty.




   Example:
      -Recursion
      -Function calls
      -Undo and redo operations
      -Evaluation of postfix expressions
      -Evaluation of infix expressions
      -Evaluation of prefix expressions


POLISH NOTATIOIN:
   -Polish notation is a notation in which operators are written before their operands.
   -This notation was introduced by the polish mathematician Lukasiewicz.
   -Polish notation is also known as prefix notation.
   -Polish notation is used to evaluate expressions in a left-to-right order.

   There are three types of polish notation:
      1. Prefix notation: In this notation, operators are written before their operands.
         Example:
          ab
          +ab*C

      2. Infix notation: In this notation, operators are written between their operands.
         Example:
          a + b   
          a + b * c

      3. Postfix notation: In this notation, operators are written after their operands.
         Example:
          ab+
          abc*-
          abc*/


      operators       |        Precedence         |         Associativity
      ----------------|---------------------------|-------------------------
      (), [], {}      |        4                  |        Left to Right
      ^               |        3                  |        Left to Right
      * , /           |        2                  |        Left to Right
      + , -           |        1                  |        Left to Right

   
   Operands:
      -Operands are the values that are used in an expression.
      -Operands can be numbers, variables, or expressions.
      Example:
         (3, 4, 5)
         (x, y, z)
   Operators:
      -Operators are the symbols that are used to perform operations on operands.
      -Operators can be unary or binary.
      Example:
         (+, -, *, /, %, etc)
   
      

 -----------------------------------------------------------------------------------------------------------------------------------------------
 DATE: 29/08/2024
 -----------------------------------------------------------------------------------------------------------------------------------------------

Rule to convert Infix to Postfix:
   1. No two operators with same precedence are stay together in stack.
   2. Operators with lower precedence can not stay after the operator with higher precedence.

   Example:
      + * this is valid
      * + this is not valid
      * ^ this is valid

QUEUE:
   -A queue is a linear data structure that follows the FIFO (First-In-First-Out) principle.
   -Elements are added to the end of the queue and removed from the front of the queue.
   -Queue is used to implement the postfix notation of an expression.
   Example:
      -Process scheduling
      -Job scheduling
      -Network routing


   Operations in Queue:

      Enqueue:
         -Add an element to the end of the queue.
         -This is perform by push().
      
      Dequeue:
         -Remove an element from the front of the queue.
         -This is perform by pop().

      front() or peek():
         -Return the element at the front of the queue without removing it.
      
      back():
         -Return the element at the end of the queue without removing it.
      
      
 -----------------------------------------------------------------------------------------------------------------------------------------------
 DATE: 02/09/2024
 -----------------------------------------------------------------------------------------------------------------------------------------------

DOUBLE ENDEND QUEUE:
   -A double-ended queue is a queue that allows elements to be added or removed from both ends
   -It is also known as a deque
   -It is implemented using a doubly linked list
   -It supports the following operations:
      -bool isFull();
      -bool isEmpty();
      -void enqueueFront();
      -void enqueueRear();
      -void dequeueFront();
      -void dequeueRear();
      -int getFront();
      -int getRear();



CIRCULAR QUEUE:
   -A circular queue is a type of queue where the last element is connected to the first element.
   -It is also known as a ring buffer.
   -It is used when the size of the queue is fixed and we want to reuse the space when
    the queue is empty.

   Enqueue: r = (r + 1) % SIZE
   Dequeue: f = (f + 1) % SIZE
      where r is the rear index and f is the front index.
   

RECURSION:
   -Recursion is a programming technique where a function calls itself repeatedly until it reaches a base case.



 -----------------------------------------------------------------------------------------------------------------------------------------------
 DATE: 03/09/2024
 -----------------------------------------------------------------------------------------------------------------------------------------------

MAPPING:
   -A mapping is a data structure that stores key-value pairs.
   -It is also known as a dictionary or hash table.
   -It is implemented using a hash table.
   
   Hash Map:
      -A hash map is a type of mapping that uses a hash function to map keys to indices.
      -It allow fast retrevial of values based on their asspociated keys.
      -In cpp hashmap is implemented by unordered_map.
      -The avg time complexity for insertion, deletion and lookup in std::unordered_map is O(1).
      -To use unordered_map we need to include <unordered_map> header file which is part of std container.
      
      Map function:
         1. insert(): It insert value inside a map.
         2. make_pair(): it create pair of values.
         3. begin(): it return reference of 0th index.
         4. ead(): it return reference of end index.
         5. find(): it return the reference where the key value if found.
         6. count(): it return '1' in case of keypair is pesent otherwise return '0'.
         7. size(): return no. of values inside map.
         8. at(): it return the value as per you pass the key pair.
         9. clear(): it remove all values of map.


 -----------------------------------------------------------------------------------------------------------------------------------------------
 DATE: 04/09/2024
 -----------------------------------------------------------------------------------------------------------------------------------------------

TREE:
   -A tree is a hierarchial data structure in which each node has a value and zero or more child.
   -It is a non-linear data structure.
   -It is used to represent a hierarchical relationship between elements.
   -It is used to store data in a way that allows for efficient searching, insertion, and deletion.

                                   O
                                  / \
                                 A   B
                                / \ / \
                               C  D E  F
                                 
   -In the above tree, 'O' is the root node, 'A', 'B', 'C', 'D', 'E', 'F' are child nodes of 'O'.

   1.Binary Tree:
      -A binary tree is a tree in which each node has at most two child nodes.
      -It is a type of tree data structure in which each node has a value and at most
      -It is used to represent a hierarchical relationship between elements.

                                   O
                                  / \
                                 A   B
                                / \ / \
                               C  D E  F
      
      Node:
         -Each element of a tree is called node. Each node contains data part and reference of there child.
      
      Root:
         -The topmost node of a tree is called root. It is only node which have no parent node.

      Edge:
         -Connection between two nodes is called Edge. An edge connect parent node to child node.

      Child:
         -The node which is connected to parent node by edge is called child.
      
      Parent:
         -The node that has one or more child nodes is called parent node.

      Leaf:
         -The node which do not have any child is called leaf node.

      Subtree:
         -A tree which is a part of another tree is called subtree.

      Depth:
         -The number of edges between root and node is called depth of node.
      
      Height:
         -The number of edges between root and leaf node is called height of tree.
      
      Level:
         -The level of a node is the number of edges on the path from the root to the node.

      Degree:
         The degree of a node in a tree is the number of edges that connect to it. In other
         words, it is the number of children a node has.
         In a binary tree, the degree of a node can be either 0, 1, or
         2. If a node has no children, its degree is 0. If a node has one
         child, its degree is 1. If a node has two children, its degree is 2.



      Traversing in Binary Tree:
         

         1.DFS(Depth-First-Search):
            -It is a traversal technique in which we start from root node and traverse as far as possible down the tree along    each branch before backtracking.
            -It is used to traverse the tree in depth-first manner.
            -It use stack data structure.

            Preorder Traversal: Root, Left subtree, Right subtree
            Inorder Traversal: Left subtree, Root, Right subtree
            Postorder Traversal: Left subtree, Right subtree, Root
      
         2.BFS(Breath-First-Search):
            -It is a traversal technique in which we start from root node and traverse all the nodes at current level before moving to next level.
            -It is used to traverse the tree in breadth-first manner.
            -It use queue data structure.

            Level Order Traversal:
               Level Order Traversal is a tree traversal algorithm that visits all the nodes at a given depth level before moving on to the next level.

               time complexity of level order traversal:
               O(n) where n is the number of nodes in the tree
            

 -----------------------------------------------------------------------------------------------------------------------------------------------
 DATE: 05/09/2024
 -----------------------------------------------------------------------------------------------------------------------------------------------

BINARY SEARCH TREE:
   -A binary search tree is a binary tree in which each node has a comparable value.
   -For any given node, all elements in its left subtree are less than the node, and all elements in its right subtree are greater than the node.
   -It is used to store data in a way that allows for efficient searching, insertion, and deletion.

   Properties of Binary Search Tree:

      1. All elements in the left subtree of a node are less than the node.
      2. All elements in the right subtree of a node are greater than the node.
      3. For any node, all elements in its left subtree and right subtree must also follow the above two properties.

   Operations on Binary Search Tree:

      1. Insertion: Inserting a new node into the tree while maintaining the properties of the binary search tree.
      2. Deletion: Deleting a node from the tree while maintaining the properties of the binary search tree.
      3. Searching: Searching for a specific value in the tree.
      4. Traversal: Traversing the tree in a specific order (e.g., inorder, preorder, postorder).

   Advantages of Binary Search Tree:

      1. Efficient searching: Binary search trees allow for efficient searching with an average time complexity of O(log n).
      2. Efficient insertion and deletion: Binary search trees allow for efficient insertion and deletion with an average time complexity of O(log n).
      3. Space efficiency: Binary search trees can store a large number of elements in a relatively small amount of space.

   Disadvantages of Binary Search Tree:

      1. Complexity: Binary search trees can be complex to implement and maintain.
      2. Balancing: Binary search trees can become unbalanced, leading to poor performance.
      3. Limited scalability: Binary search trees can become too large to fit in memory, leading to disk I/O and performance issues.

   Types of Binary Search Trees:

      1. AVL Tree: A self-balancing binary search tree that ensures the height of the tree remains relatively small.
      2. Red-Black Tree: A self-balancing binary search tree that ensures the height of the tree remains relatively small.
      3. Splay Tree: A self-balancing binary search tree that moves frequently accessed elements to the root of the tree.
      4. B-Tree: A self-balancing binary search tree that keeps data sorted and allows for efficient insertion and deletion.
      


Characteristics          |  	         Binary Search	                     |               Binary Search Tree                  
-------------------------|-------------------------------------------------|---------------------------------------------------
Data Structure           |              	Array                            |                  	Tree
Search Method	          |            Iterative or Recursive	            |                  Recursive
Time Complexity	       |                O(log n)	                        |         O(log n) (average), O(n) (worst)
Space Complexity         |                 O(1)	                           |                     O(n)
Insertion/Deletion	    |              Not applicable	                  |            O(log n) (average), O(n) (worst)
Search Requirements	    |              Sorted array	                     |                  Balanced tree
Implementation	          |           Simple to implement	                  |            More complex to implement
Use Cases	             |     Searching for an element in a sorted array	|   Searching, inserting, and deleting elements
                         |                                                 |                 in a dynamic dataset
-------------------------------------------------------------------------------------------------------------------------------


Balanced Tree:
   A balanced binary search tree is a tree in which the height of the left and right subtrees
   of every node differs by at most one.

AVL TREE:
   -An AVL tree is a self-balancing binary search tree that ensures the height of the tree remains relatively small.
   -It is a type of binary search tree that automatically balances itself to maintain a balance between the height of the left and right subtrees.
   -It is used to store data in a way that allows for efficient searching, insertion, and deletion.
   -AVL tree is named after its inventors, Adelson-Velskii and Landis.
   -Balanced factor of each node must be -1, 0, 1.

   Properties of AVL Tree:

      1. The height of the left and right subtrees of every node differs by at most one.
      2. The left subtree of a node contains only keys less than the node's key.
      3. The right subtree of a node contains only keys greater than the node's key.

   Operations on AVL Tree:

      1. Insertion: Inserting a new node into the tree while maintaining the balance of the tree.
      2. Deletion: Deleting a node from the tree while maintaining the balance of the tree.
      3. Searching: Searching for a specific value in the tree.
      4. Traversal: Traversing the tree in a specific order (e.g., inorder, preorder, postorder).

   Balancing Factor:

      -The balancing factor of a node is the difference between the height of its left subtree and the height of its right subtree.
      -If the balancing factor of a node is greater than 1, the tree is unbalanced and needs to be rotated.

   Rotation:

      -Rotation is the process of rearranging the nodes of the tree to balance it.
      -There are two types of rotation: left rotation and right rotation.

   Advantages of AVL Tree:

      1. Efficient searching: AVL trees allow for efficient searching with an average time complexity of O(log n).
      2. Efficient insertion and deletion: AVL trees allow for efficient insertion and deletion with an average time complexity of O(log n).
      3. Space efficiency: AVL trees can store a large number of elements in a relatively small amount of space.

   Disadvantages of AVL Tree:

      1. Complexity: AVL trees can be complex to implement and maintain.
      2. Limited scalability: AVL trees can become too large to fit in memory, leading to disk I/O and performance issues.

   Example of AVL Tree:

             10
            /  \
           5    15
          / \   / \
         2   7 12  18

   In this example, the AVL tree is balanced, and the height of the left and right subtrees of every node differs by at most one.
   


  Segment Tree:
  -------------

  A segment tree is a binary tree where each node represents a segment of the array.
  Each node has two children, a left child and a right child, and each child represents
  a segment of the array that is a subset of the segment represented by its parent.



  The segment tree can be used to perform range queries, such as finding the sum of all
  elements in a given range, or finding the maximum element in a given range.

GRAPH:
----------------
   A graph is a non-linear data structure consisting of nodes or vertices connected by edges.
   Each node in a graph may have multiple edges connected to it, and each edge may connect a node
   to one or more other nodes.

   Travesals:
   1. Depth First Traversal (DFS): This traversal starts at the root node and explores
   as far as possible along each branch before backtracking. 


   2. Breadth First Traversal (BFS): This traversal starts at the root node
   and explores all the nodes at the present depth prior to moving on to nodes at the next depth
   level.


What is trie:
----------------
A trie, also known as a prefix tree, is a tree-like data structure in which each node
is associated with a string. Tries are often used to store a dynamic set or associative array
where the keys are usually strings.

