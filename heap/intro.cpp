/* Basic intro of heap
-> it is a complet binary tree that comes with a heap order property

=> Heap order property
1 -> Max heap : child node is always less then parent node
2 -> Min heap : child node is always greater then parent node

Insertation:
if node present at i^th index then 
1-> its left node is present at 2*i index
2-> its right node is present at (2*i + 1) index
3-> parent node of a child node(index i) is present at i/2
*/