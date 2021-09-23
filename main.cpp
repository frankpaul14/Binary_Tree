#include "node_bst.h"
#include "bst.h"
#include <cstdlib> 
#include <iostream>  
using namespace std;
int main () {
    /*NodeBST<int> n(10);
    NodeBST<int> n1(107);
    NodeBST<int> n2(120);

    cout << n1 << endl;
    cout << n2 << endl;
    cout << n << endl;*/

    BST<int> tree;
    srand(0);

    for ( int i=0; i<20 ; i++){
        tree.insert(rand()%201);
    }

    tree.inorder();
    cout<< endl<<"Predecessor & Successor"<< endl;
    cout<< *(tree.predecessor(tree.search(184)))<<endl; 
    cout<< *(tree.predecessor(tree.search(47)))<<endl;
    cout<< *(tree.successor(tree.search(54)))<<endl;
    cout<< *(tree.successor(tree.search(64)))<<endl;

    tree.deleteNode(tree.search(70));
    tree.deleteNode(tree.search(178));
    tree.deleteNode(tree.search(86));

    cout<<endl<<"Inorder after delete "<<endl;
    tree.inorder();
    cout<<endl<<"PREORDER"<<endl;
    tree.preorder();
    cout<<endl<<"POSTORDER"<<endl;
    tree.postorder();
}