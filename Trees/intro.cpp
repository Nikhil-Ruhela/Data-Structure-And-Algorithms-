/*
-> TREE IS A NON LINEAR DATSA STRACTURE
-> IT IS IDEALY FOR REPRESENTING HIERARCHICAL DATA
-> IT HAVE A INT TYPE DATA AND MULTIPLE POINTER
for multiple nodes we declear tree as
                       node{
                            int data;
                            list<*node>child
                           }
(1) Node-> a single element of tree ,all data store in node
(2) Root-> Top node of a tree
(3) Child -> the node below the parent node 
(4) parent -> node above the child node
(5) leaf -> the node which does not have child or the last node of tree in a chain
(6) if the two child have same parent then they are called sibling
(7) Binary tree -> it have child less then or equal to 2 (child <= 2)

TYPE OF BINARY TREES
(1) full or strict tree -> all node have either 0 or 2 children
(2) perfect binary tree -> internal node have 2 children and leaf nodes are on same level
(3) complet binary tree -> all level are completely filled except possible the last level and last level must have its kye as left as possible
(4) degenerate tree     -> every parent node has exectly one child
*/