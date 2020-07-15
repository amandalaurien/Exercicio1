//
//  main.c
//  Exercicio1
//
//  Created by Amanda Laurien on 14/07/20.
//  Copyright © 2020 Amanda Laurien. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    
    
    // Solicitar duas notas e realizar a media entre elas
    
    //Para usar acento
    setlocale(LC_ALL, "");
    
    float a;
    float b;
    
    printf(" Informe a primeira nota: \n");
    scanf( " %f", &a);
    
    fflush(stdin);
    printf(" \n Informe a segunda nota: \n");
    scanf( " %f", &b);
    
    printf(" \n A média do aluno é: %.1f \n", (a + b)/2);
    
}
