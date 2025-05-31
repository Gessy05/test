#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "num.h"
int main() {
    int n, a, b;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    printf("\nAnalyse du nombre %d :\n", n);
    printf("Nombre premier ? %s\n", isPrime(n) ? "Oui" : "Non");
    printf("Nombre parfait ? %s\n", isPerfect(n) ? "Oui" : "Non");
    printf("Nombre compose ? %s\n", isComposite(n) ? "Oui" : "Non");
    printf("Nombre triangulaire ? %s\n", isTriangular(n) ? "Oui" : "Non");
    printf("Nombre pair ? %s\n", isEven(n) ? "Oui" : "Non");
    printf("Nombre impair ? %s\n", isOdd(n) ? "Oui" : "Non");

    printf("\nEntrez deux nombres pour tester s'ils sont des premiers jumeaux : ");
    scanf("%d %d", &a, &b);
    printf("Premiers jumeaux ? %s\n", areTwinPrimes(a, b) ? "Oui" : "Non");


system("cls");
int val = 4;
int estpair = 0;
if(val%2==0){
 estpair=1;
}
(estpair)? printf("oui"): printf("non");
    return 0;
}
