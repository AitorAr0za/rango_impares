#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

/*
    [] declaramos las variables v_inicial y v_final
    [] le pedimos al usuariop definir las variables previamente declaradas
    [] hacemos un if para cuando v_inicial sea mayor a v_final
    [] hacemos otro if para cuando no haya ningun numero impar en el rango proporcionado
    [] hacemos un else en caso de que ninguna de las dos situaciones previamente consideradas hayan sido reales
    [] hacemos un for dentro del else, para recorrer todos

*/




int main () {

    int v_inicial;
    int v_final;

    printf("ingrese el valor inicial: ");
    scanf("%d", &v_inicial);

    printf("ingrese el valor final: ");
    scanf("%d", &v_final);


    if (v_inicial > v_final) {

            printf("has ingresado un valor inicial mayor al valor final.\n");

    }

    else if (((v_final - 2) <= v_inicial) and (((v_final % 2 == 0) or (v_inicial % 2 == 0)) or ((not (v_final % 2 == 0)) and (not(v_inicial % 2 == 0))))) {

            printf("no hay numeros impares en el rango proporcionado.\n");

    }

    else {

        for (int i = v_inicial + 1; i < v_final; i++) {

            if (not(i % 2 == 0)) {

                printf("%d\n", i);

            }

        }

    }
    return 0;
}
