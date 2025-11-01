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