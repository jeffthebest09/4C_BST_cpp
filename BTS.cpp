#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node * left; // Sinistra
    Node * right; // Destra

    Node(int key)
    {
        key = val;
        left = nullptr;
        right = nullptr;
    }
};


Node *insert(Node *n, int val)
{
    if (n == nullptr)
    {
        return new Node(val);
    }

    
}

int main()
{
    Node *n1 = new Node(5);
    Node *n2 = new Node(7);
    Node *n3 = new Node(1);
    n1->right = n2;
    n1->left = n3;

    return 0;
}