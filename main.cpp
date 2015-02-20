#include "Evaluador.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

//Devuele la suma de todos los elementos de mi_pila (dado) y mi_cola (dado)
float sumarElementos(stack<float> mi_pila, queue<float> mi_cola)
{
    float Suma1 = 0, Suma2 = 0,SumaTotal = 0; // variable que devuelve la suma de la pila y cola

    while(!mi_cola.empty()) // Se va a ejecutar hasta que la cola este vacia
    {
        Suma1 += mi_cola.front(); //a la variable "Suma1" se le va sumando lo que contiene en ese momento la cola
        mi_cola.pop(); // eliminamos un elemento en la cola
    }

    while(!mi_pila.empty()) // Se va a ejecutar hasta que la cola este vacia
    {
        Suma2 += mi_pila.top(); //a la variable "Suma" se le va sumando lo que contiene en ese momento la pila
        mi_pila.pop(); // eliminamos un elemento en la pila
    }
    SumaTotal = Suma1+Suma2;//sumamos los dos tados que tenemos de la suma de la pila y la cola
    return SumaTotal;//retornamos el valor sumado de la pila y cola
}

//Devuelve true si mi_vector (dado) tiene valores repetidos
bool existenRepetidos(vector<string> mi_vector)
{
    vector<string>::iterator i;
    for(i=mi_vector.begin();i!=mi_vector.end();i++)
    {
        vector<string>::iterator j = i;
        for (j++; j != mi_vector.end(); j++)
        {
            if(*i == *j)
            {
                return true;
            }
        }
    }
    return false;
}

//Devuelve la cantidad de elementos en edades (dado) que son mayores o iguales que 18
int contarMayoresDeEdad(list<int>edades)
{
    int cont = 0;
    int valor;
    list<int>::iterator i;
    for(i=edades.begin();i!=edades.end();i++)
    {
        valor=*i;
        if(valor>=18)
        {
            cont++;
        }
    }
    return cont;
}

//Devolver el un mapa con los siguientes valores dados en la tabla
//   LLave      |   Valor
//----------------------------
//  "Lolo"      |   98923212
//  "Lola""     |   92123243
//  "Rufo"      |   93212322
//  "Punpun"    |   99321273
//  "Ponpon"    |   92133243
map<string,int> obtenerAgenda()
{
    map<string,int> agenda;
    agenda["Lolo"]=98923212;
    agenda["Lola"]=92123243;
    agenda["Rufo"]=93212322;
    agenda["Punpun"]=99321273;
    agenda["Ponpon"]=92133243;
    return agenda;
}

//Devuelve el numero mayor en mi_set (dado)
double obtenerMenor(set<double> mi_set)
{
    double mayor=0;
    set<double>::iterator i = mi_set.begin();
    while(i!=mi_set.end())
    {
        if(*i>mayor)
        {
            mayor=*i;
        }
        i++;
    }
    return mayor;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 1;
}
