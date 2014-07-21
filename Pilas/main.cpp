#include <iostream>
#include <stack>

using namespace std;

class Numero
{
public:
    int x;
    Numero(int x)
    {
        this->x = x;
    }
};

int funcion1()
{
    int x = 10;
    return x;
}

int main()
{

    stack<Numero*> mis_numeros;
    mis_numeros.push(new Numero(10));
    mis_numeros.push(new Numero(20));
    mis_numeros.push(new Numero(30));

    while(!mis_numeros.empty())
    {
        cout<<mis_numeros.top()->x<<endl;
        mis_numeros.pop();
    }

    return 0;
}
