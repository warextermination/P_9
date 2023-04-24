// P_9_Milko.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
int VA,N1,N2,C1, C2, op, opo;


    setlocale(LC_ALL, "es_MX.UFT-8");
    std::cout << "Este programa calculara el valor absoluto, Ingresa tu numero fav: " << std::endl;
    std::cin >> VA;

    if (VA<=0)
    {
        VA = VA * (-1);
        std::cout << "El valor asoluto es: " << VA << std::endl;
        
    }
    else
    {
        std::cout << "El valor absoluto es: " << VA << std::endl;
       
    }
    std::cout << "A continuacion calcularemos si un numero es mayor o menor, favor de ingresar el primer numero " << std::endl;
    std::cin >> N1;
    std::cout << "Igresa el segundo numero: " << std::endl;
    std::cin >> N2;

    if (N1 > N2)
    {
        N1 >= N2;
        std::cout << "El numero mayor es: " << N1 << std::endl;

    }
    else
    {
        N1 <= N2;
        std::cout << "El numero menor es: " << N2 <<std::endl;
    }
    std::cout << "Por ultimo te regalare un pequeña calculadora " << std::endl;
    std::cout << "Dame el primer numero pls " << std::endl;
    std::cin >> C1;
    std::cout << "El segundo numero porfas " << std::endl;
    std::cin >> C2;
    std::cout << "Ahora elige la operacion que quieras hacer \n 1.Sumar \n 2.Restar \n 3.Multiplicar \n 4.Dividir \n";

        std::cin >> op;
        switch (op)
        {
        case 1:
            opo = C1 + C2;
            std::cout << "El resultado de la suma es: " << opo << ". \n";
                break;
            case 2:
                opo = C1 - C2;
                std::cout << "El resultado de la resta es: " << opo << ". \n";
                    break;
            case 3:
                opo = C1 * C2;
                std::cout << "El resultado de la multiplicacion es: " << opo << ". \n";
                break;
            case 4:
                opo = C1 / C2;
                std::cout << "El resultado de la division es: " << opo << ". \n";
                break;
        }
        
        
        
        
        
        
        

}

