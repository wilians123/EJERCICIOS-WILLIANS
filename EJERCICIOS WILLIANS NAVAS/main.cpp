#include <iostream>

using namespace std;

/*
//TABLA DE MULTPLICAR DE UN NUMERO

int main() {
    int i, numero;

    cout<<"TABLAS DE MULTIPLICAR"<<endl;

    cout<<"Ingrese el numero de la tabla:";
    cin>>numero;


    cout<<"la tabla de multiplicar del numero es "<<numero;

    for (i = 1 ; i <= 10 ; i++ ) {
        cout<<endl<<numero <<" * "<< i <<" = "<< numero * i ;

    }




    return 0;
}
*/


/*
//SERIE FIBONACCI

int main()
{
    int numero=10,a,b,i;
    do{
    }while(numero<=1);
    cout << endl;
    cout << "Los " << numero << " primeros numeros de la serie de fibonacci del son " <<endl;
    a=1;
    b=1;
    cout << a << " ";
    for(i=2;i<=numero;i++)
    {
        cout << b << " ";
        b = a + b;
        a = b - a;
    }
    cout << endl << endl;
    system("pause");
}
*/


/*
//MOSTRAR SI UN NUMERO ES PRIMO O NO

int main()
{

    int n, i;

    cout << "\nIntroduce un numero: ";
    cin >> n;

    if(n==1)
    {
        cout << "\nNo es primo" << endl;
    }
    else
    {
        i=2;
        while(n%i!=0)
        {
            i++;
        }

        if(i==n)
            cout << "\nEs primo" << endl;
        else
            cout << "\nNo es primo" << endl;
    }
    system("pause");
}
*/


/*
//SABER SI UN NUMERO ES PAR O NO

int main(){
    int numero;
    cout<<"Ingrese el numero que desea saber si es par o no:";
    cin>>numero;

    div_t resultado;

    resultado=div(numero,2);

    if (resultado.rem>0)

    {

        cout <<endl<< numero << " es impar" << endl;

    }

    else {

        cout << numero << " es par" << endl;

    }



    cin.get();

    return 0;

}
*/

/*
//MOSTRAR EL FACTORIAL DE UN NUMERO
int main(){
    int numero,factorial=1;
    do
    {
        std::cout<<"Ingrese el numero para saber su factorial: ";
        std::cin>>numero;

    } while ( numero<1 );

    for (int i = 1; i <= numero; i++) {
        factorial=factorial*i;
        std::cout<<i<<"*";
    }

    std::cout<<"\nEl factorial es: "<<factorial<<"\n";

    system("pause");
    return 0;
}
*/




