#include <stdio.h>

double berekenBelasting(double inkomen) {
    double belasting = 0.0;
    if (inkomen <= 75518) {
        belasting = inkomen * 0.3697;
    }
    else {
        belasting = 75518 * 0.3697 + (inkomen - 75518) * 0.4950;
    }
    return belasting;
}

int main() {
    double inkomen;
    printf("Voer uw jaarinkomen in: ");
    scanf_s("%lf", &inkomen);

    double belasting = berekenBelasting(inkomen);
    printf("De inkomstenbelasting op een inkomen van %.2f EURO is %.2f\n EURO", inkomen, belasting);

    return 0;
}