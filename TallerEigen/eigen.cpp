/* *********************************************************
*
*	Fecha: 26 de Agosto 2022
*	Autor: Valentina Del Pilar Franco Suárez, Estudiante CCIA
*	Materia: HPC I
*	Tema: Taller de ejercicios usando Eigen
*
* **********************************************************/

// Llamamos las bibliotecas incluyendo la interfaz casera
#include <iostream>
#include <eigen3/Eigen/Dense>
#include <stdio.h>
#include "eigen.h"

// Se ponen 4 matrices de 2x2 globales
// porque son de las que más utilizan en los ejercicios
// así que para no estar creando variables locales en cada punto
// se crean globales
Eigen::Matrix2d A;
Eigen::Matrix2d B;
Eigen::Matrix2d C;
Eigen::Matrix2d resultado;

// Lo mismo sucede con las matrices 3x3, son usadas varias
// veces, por lo tanto, se vuelven globales
Eigen::Matrix3d D;
Eigen::Matrix3d E;
Eigen::Matrix3d F;
Eigen::Matrix3d result;

void puntoA(){
    A<<4,-2,1,-7;
    B<<-1,2,6,-5;

    resultado = 3*A.array() - 4*B.array();

    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto A    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << resultado << std::endl;
}

void puntoB(){
    A<<0,-1,2,1;
    B<<1,2,3,4;

    resultado = (3*(B*A).array() - 4*A.array())/2;
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto B    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << resultado << std::endl;
}

void puntoC(){
    A<<-3,-2,3,3;
    B<<5,3,9,4;
    C<<1,1,0,0;

    resultado = C*(A*B.transpose()).inverse();
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto C    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << resultado << std::endl;
}

void puntoD(){
    A<<2,1,-4,-3;
    B<<2,2,6,4;

    resultado = (B*A.inverse());
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto D    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << resultado << std::endl;
}

void puntoE(){
    Eigen::MatrixXd A(2,3);
    Eigen::MatrixXd B(3,2);
    Eigen::MatrixXd res;

    A<<3,0,-1,0,2,1;
    B<<1,2,1,0,0,6;
    C<<-2,0,-2,-5;

    res = (A * B) + C;
    resultado = 2*(res.array());
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto E    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << resultado << std::endl;
}

void puntoF(){
    D<<1,5,-1,-1,2,2,0,-3,3;
    E<<-1,-4,3,1,-2,-2,-3,3,-5;

    result = D.array() + 3*E.array();
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto F    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << result << std::endl;
}

void puntoG(){
    D<<2,7,3,3,9,4,1,5,3;
    E<<1,0,2,0,1,0,0,0,1;

    result = (E*D.inverse());
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto G    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << result << std::endl;
}

void puntoH(){
    D<<1,1,1,6,5,4,13,10,8;
    E<<0,1,2,1,0,2,1,2,0;

    result = (D.inverse()*E);
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto H    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << result << std::endl;
}

void puntoI(){
    A<<3,-1,0,2;

    resultado = A.transpose()*A - 2*A;
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto I    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << resultado << std::endl;
}

void puntoJ(){
    A<<4,2,-1,0;

    resultado = A*A*A;
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto J    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << resultado << std::endl;
}

void puntoK(){
    A<<2,4,3,2;
    B<<1,0,2,1;
    C<<7,5,6,1;

    resultado = C*(A.transpose()*B).inverse();
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto K    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << resultado << std::endl;
}

void puntoL(){
    Eigen::MatrixXd A(2,3);
    Eigen::MatrixXd B(3,2);

    A<<1,0,-2,2,-1,3;
    B<<2,-3,-2,0,-1,-2;

    resultado = A*A.transpose() - 2*A*B;
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto L    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << resultado << std::endl;
}

void puntoM(){
    Eigen::MatrixXd A(1,3);
    Eigen::MatrixXd B(3,2);
    Eigen::MatrixXd C(2,1);
    Eigen::MatrixXd res;

    A<<4,8,12;
    B<<3,2,0,1,-1,0;
    C<<3,-1;

    res = A*B*C;
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto M    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << res << std::endl;

}

void puntoO(){
    D<<2,5,7,6,3,4,5,-2,-3;
    E<<-1,1,0,0,1,1,1,0,-1;

    result = (E*D.inverse());
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto O    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << result << std::endl;
}

void puntoP(){
    Eigen::Matrix4d A;
    Eigen::Matrix4d B;
    Eigen::Matrix4d res;

    A<<1,1,1,1,1,1,-1,-1,1,-1,1,-1,1,-1,-1,1;
    B<<1,1,0,0,1,0,1,0,1,0,0,1,1,0,1,1;

    res = (A.inverse()*B);
    std::cout << "*****************" << std::endl;
    std::cout << "*    Punto P    *" << std::endl;
    std::cout << "*****************" << std::endl;
    std::cout << res << std::endl;
}

// Al ser 15 puntos en total, se maneja con un menu el acceso a los mismos
// permitiendo esto una mayor organización a la hora de consultar y validar
void menu(){
    int op;
    bool seguir = true;

    // El menu cuenta con 16 opciones, 15 ejercicios y 1 opcion para salir del menu
    do{
        std::cout << "\n****************" << std::endl;
        std::cout << "*     Menu     *" << std::endl;
        std::cout << "****************" << std::endl;
        std::cout << "*1. Punto A    *" << std::endl;
        std::cout << "*2. Punto B    *" << std::endl;
        std::cout << "*3. Punto C    *" << std::endl;
        std::cout << "*4. Punto D    *" << std::endl;
        std::cout << "*5. Punto E    *" << std::endl;
        std::cout << "*6. Punto F    *" << std::endl;
        std::cout << "*7. Punto G    *" << std::endl;
        std::cout << "*8. Punto H    *" << std::endl;
        std::cout << "*9. Punto I    *" << std::endl;
        std::cout << "*10. Punto J   *" << std::endl;
        std::cout << "*11. Punto K   *" << std::endl;
        std::cout << "*12. Punto L   *" << std::endl;
        std::cout << "*13. Punto M   *" << std::endl;
        std::cout << "*14. Punto O   *" << std::endl;
        std::cout << "*15. Punto P   *" << std::endl;
        std::cout << "*16. Salir     *" << std::endl;
        std::cout << "****************" << std::endl;

        std::cout << "\n**********************" << std::endl;
        std::cout << "* Ingrese una opción *" << std::endl;
        std::cout << "**********************" << std::endl;
        std::cin >> op;

        switch(op){
        case 1:
            puntoA();
            std::cin.get();
            break;
        case 2:
            puntoB();
            std::cin.get();
            break;
        case 3:
            puntoC();
            std::cin.get();
            break;
        case 4:
            puntoD();
            std::cin.get();
            break;
        case 5:
            puntoE();
            std::cin.get();
            break;
        case 6:
            puntoF();
            std::cin.get();
            break;
        case 7:
            puntoG();
            std::cin.get();
            break;
        case 8:
            puntoH();
            std::cin.get();
            break;
        case 9:
            puntoI();
            std::cin.get();
            break;
        case 10:
            puntoJ();
            std::cin.get();
            break;
        case 11:
            puntoK();
            std::cin.get();
            break;
        case 12:
            puntoL();
            std::cin.get();
            break;
        case 13:
            puntoM();
            std::cin.get();
            break;
        case 14:
            puntoO();
            std::cin.get();
            break;
        case 15:
            puntoP();
            std::cin.get();
            break;
        case 16:
            seguir = false;
            break;
        default:
            std::cout << "****************" << std::endl;
            std::cout << "*  NO VALIDO   *" << std::endl;
            std::cout << "****************" << std::endl;
            std::cin.get();
        }
    }while(seguir);
}
