#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node * left; // Sinistra
    Node * right; // Destra

    Node(int key)
    {
        val = key;
        left = nullptr;
        right = nullptr;
    }
};


Node *insert(Node *root, int val)
{
    if (root == nullptr) // Caso base: albero vuoto
    {
        return new Node(val);
    } 

    Node *dad {nullptr};    // Ricorda il nodo padre
    Node *current {root};   // Parte dalla radice e serve per navigare dentro l'albero

    while (current != nullptr) // continua a scendere finché non arriva una posizione vuota
    {
        dad = current; // Salva la posizione attuale prima di spostarsi

        if (val < current->val)
        {
            current = current->left; // Va a sinistra
        }
        else if (val > current->val) 
        {
            current = current->right; // Va a destra
        }
        else 
        {
            return root; // se il valore non è né più grande né più piccolo del valore corrente è un duplicato
        }
    } // Il while finisce qua.  Ora 'dad' è l'ultimo nodo valido e 'current' è nullptr.

    if (val < dad->val)
    {
        dad->left = new Node(val); // se il valore è minore del valore del padre, lo si aggangia alla sua sinsitra
    }
    else 
    {
        dad->right = new Node(val); // se è maggiore lo si aggancia alla sua destra
    }

    return root; // Restituisce la radice aggiornata
}

int main()
{
    Node *root = nullptr;

    root = insert(root, 10);
    
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 12);



    return 0;
}
