#include <stdio.h>
#include <stdlib.h>

void dividir()
{
    int a,b,res,resto;
    
    printf("Primer Número\n");
    scanf("%d",&a);
    printf("Segundo Número\n");
    scanf("%d",&b);
    
    res = a/b;
    resto = a%b;
    
    printf("La división ENTERA entre %d y %d es --> %d\n", a, b, res);
    printf("El resto es --> %d", resto);
}

void multiplicar()
{
    int a,b,res;
    
    printf("Primer Número\n");
    scanf("%d",&a);
    printf("Segundo Número\n");
    scanf("%d",&b);
    
    res = a*b;
    
    printf("La multiplicación entre %d y %d es --> %d", a, b, res);
}

void restar()
{
    int a,b,res;
    
    printf("Primer Número\n");
    scanf("%d",&a);
    printf("Segundo Número\n");
    scanf("%d",&b);
    
    res = a-b;
    
    printf("La resta de %d y %d es --> %d", a, b, res);
}

void sumar()
{
    int a,b,res;
    
    printf("Primer Número\n");
    scanf("%d",&a);
    printf("Segundo Número\n");
    scanf("%d",&b);
    
    res = a+b;
    
    printf("La suma de %d y %d es --> %d", a, b, res);
}

int main() 
{
    char n;
    
    printf("¿Qué quieres hacer?\n");
    //CREAR MENÚ 
    scanf("%c",&n);
            
    switch(n)
    {
        case 's':
        case 'S': sumar();
        break;
        
        case 'r':
        case 'R': restar();
        break;
        
        case 'd':
        case 'D': dividir();
        break;
        
        case 'm':
        case 'M': multiplicar();
        break;
    }
    return 0;
}
