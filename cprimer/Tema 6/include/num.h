#ifndef NUM_H
#define NUM_H

#include <iostream>

using std::cout;

struct node {
    int digito = 0;
    node *sig = nullptr;
};

class num
{
    public:
        num();
        virtual ~num();
        void insert_node(int i)
        {
            if (head == nullptr)
            {
                head->digito = i;
                head->sig = nullptr;
            }
            else
            {
                aux = head;
                while(aux != nullptr)
                    pre = aux;
                    aux = aux->sig;
                node *nod;
                nod->digito = i;
                pre->sig = nod;
            }

        }
        void show()
        {
            aux = head;
            while(aux != nullptr)
            {
               cout << aux->digito;
               aux = aux->sig;
            }
        }

    protected:

    private:
        node *head;
        node *aux;
        node *pre;
};

#endif // NUM_H
