#include <bits/stdc++.h>
using namespace std;
#include "treeFunctions.cpp"

int main() {
    Node* root = NULL;
    int choice;
    while (true) {
        cout << "\n--- Binary Tree Operations Menu ---\n";
        cout << "1. Construct Binary Tree\n";
        cout << "2. Inorder Traversal\n";
        cout << "3. Preorder Traversal\n";
        cout << "4. Postorder Traversal\n";
        cout << "5. Count and Display Leaf Nodes\n";
        cout << "6. Find Height of Tree\n";
        cout << "7. Delete Last Node\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            root = constructTree();
            break;
        case 2:
            cout << "Inorder Traversal: ";
            inorder(root);
            cout << endl;
            break;
        case 3:
            cout << "Preorder Traversal: ";
            preorder(root);
            cout << endl;
            break;
        case 4:
            cout << "Postorder Traversal: ";
            postorder(root);
            cout << endl;
            break;
        case 5:
            cout << "Leaf Nodes: ";
            cout << leafCount(root) << endl;
            break;
        case 6:
            cout << "Height of Tree: " << height(root) << endl;
            break;
        case 7:
            root = deleteLastNode(root);
            cout << "Last Node Deleted." << endl;
            break;
        case 8:
            return 0;
        default:
            cout << "Invalid choice" << endl;
        }
    }
}

Take n numbers of inputs from the user. Specifically ask for the left child and right 
child. Write a menu driven program to perform the following operations using 
separate procedures:
(a) Construct a linked binary tree.
(b) Traverse the tree and find the output in the form of inorder representation.
(c) Perform preorder and postorder traversal and generate output. Use recursive 
function for traversing the tree.
(d) Calculate the number and identify the leaf nodes.
(e) Find the height of the created binary tree.
(f) Delete the Last node of the binary tree.
The program should contain two .cpp files, one should contain the main function and 
menu (treeOperations.cpp) whereas the other file defOperations.cpp is to be used 
for defining different operations.
2. Implement a menu driven program to perform the following operations on a binary 
search tree:
(a) Create a BST for the list of given set of data: LINUX, OS2, DOS, XENIX, SOLARIS, 
WINDOWS, VISTA, XP, UNIX, CPM.
(b) Tabulate the number of comparisons undertaken for retrieving the following 
keys: LINUX, XENIX, DOS, UNIX, CPM
(c) Undertake the following operations on the BST
(i) Insert MAC
(ii) Delete WINDOWS
(iii) Delete UNIX
(iv) Delete the root node
(d) Write a function to retrieve the elements from the tree in the sorted order.
(e) Calculate the balance factor of all the nodes present in the BST.