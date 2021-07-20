#include <stdio.h>
#include <limits.h>

/**
 *
 * @author (Mofadhal Al-Manari und Leen Alkhadraa)
 * @version (06.07.2021)
 */
const int ENDEN = 0;
const int GELD = 1;
const int FABO = 2;
const int MIN_UND_MAX = 3;
const int VALUEPRINZIP = 4;
/**
 *Nettopreis wird eingegeben . Es wird davon MwSt , bruttopreis , skonto und die Rechungsbetrag berechnet.
 */
void geldbeitrags() {
    char slak = '#';
    float nettopreis;
    printf("Geben Sie Ihr Geldbetrag ein ?\n");
    scanf("%f%c", &nettopreis, &slak);
    if (slak == '#') {
        printf("Bitte geben Sie einen Zahl grosser als 0 \n");
        while (getchar() != '\n');  // clean stdin
        geldbeitrags();

    } else if (nettopreis < 0) {
        printf("Bitte geben Sie einen Zahl grosser als 0 \n");
        geldbeitrags();
    } else {
        float mwst, brutto, skonto, rechungsbetrag;
        mwst = nettopreis * 0.20;
        brutto = nettopreis + mwst;
        skonto = brutto * 0.02;
        rechungsbetrag = brutto - skonto;
        printf("Nettopreis          Euro %.2f   \n", nettopreis);
        printf("+ 20%% MwSt          Euro %.2f   \n", mwst);
        printf("=====================================\n");
        printf("Bruttopreis         Euro %.2f   \n", brutto);
        printf("- 2%% Skonto         Euro %.2f   \n", skonto);

        printf("=====================================\n");
        printf("Rechnungsbetrag     Euro %.2f   \n", rechungsbetrag);
    }

}

/**
 * Diese Metode liest ein Zahl ein und dann es wird iterativ die
 *  ersten n Fibonacci-Zahlen berechne .
 */
void fabonacci() {
    char slak = '#';
    int n1 = 0, n2 = 1, n3, i, number;
    printf("Enter the number of elements:\n");
    scanf("%d%c", &number, &slak);
    if (slak == '#') {
        printf("Bitte geben Sie einen Zahl grosser als 0 \n");
        while (getchar() != '\n');  // clean stdin
        fabonacci();
    } else if (number < 0) {
        printf("Bitte geben Sie einen Zahl grosser als 0 \n");
        fabonacci();
    } else {
        printf("Die n Fibonacci-Zahlen sind: ");
        printf("\n%d %d", n1, n2);//printing 0 and 1
        for (i = 2; i < number; ++i)//loop starts from 2 because 0 and 1 are already printed
        {
            n3 = n1 + n2;
            printf(" %d", n3);
            n1 = n2;
            n2 = n3;
        }
        printf("\n");
    }
}

/**
 * Diese Metode gibt den maximalen und den minimalen Wert der Typen (int , char , short)
 * und unsigned(int , char , short)
 * Es wird auch der Vergleich  die Werte der Bibliothek limits.h der C Standard Library ausgegeben.
 */
void minUndMax() {
    printf("Warten Sie einen Moment...\n");
    char charMin = 0;
    char charMax = 0;
    short shortMin = 0;
    short shortMax = 0;
    int intMin = 0;
    int intMax = 0;
    unsigned char uChar = 0;
    unsigned short uShort = 0;
    unsigned int uInt = 0;
    while (1) {
        int temp_next_max_int = (int) (intMax + 1);
        int temp_next_min_int = (int) (intMin - 1);
        int temp_next_unsigned_int = (unsigned int) (uInt + 1);
        if (
                !(charMax < (char) (charMax + 1)) &&
                !(charMin > (char) (charMin - 1)) &&
                !(shortMax < (short) (shortMax + 1)) &&
                !(shortMin > (short) (shortMin - 1)) &&
                !(intMax < temp_next_max_int) &&
                !(intMin > temp_next_min_int) &&
                !(uChar < (unsigned char) (uChar + 1)) &&
                !(uInt < temp_next_unsigned_int) &&
                !(uShort < (unsigned short) (uShort + 1))
                ) {
            break;
        }
        if (charMax < (char) (charMax + 1)) {
            charMax++;
        }
        if (charMin > (char) (charMin - 1)) {
            charMin--;
        }
        if (shortMax < (short) (shortMax + 1)) {
            shortMax++;
        }
        if (shortMin > (short) (shortMin - 1)) {
            shortMin--;
        }
        if (intMax < temp_next_max_int) {
            intMax++;
        }
        if (intMin > temp_next_min_int) {
            intMin--;
        }
        if (uChar < (unsigned char) (uChar + 1)) {
            uChar++;
        }
        if (uInt < temp_next_unsigned_int) {
            uInt++;
        }
        if (uShort < (unsigned short) (uShort + 1)) {
            uShort++;
        }
    }
    printf("\nThe minimum value of CHAR = %d\n", CHAR_MIN);
    printf("%d\n", charMin);
    printf("The maximum value of CHAR = %d\n", CHAR_MAX);
    printf("%d\n", charMax);

    printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
    printf("%d\n", shortMin);

    printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);
    printf("%d\n", shortMax);

    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("%d\n", intMin);

    printf("The maximum value of INT = %d\n", INT_MAX);
    printf("%d\n", intMax);

    printf("The value of unsigned CHAR = %d\n", UCHAR_MAX);
    printf("%d\n", uChar);

    printf("The  value of unsigned short = %d\n", USHRT_MAX);
    printf("%d\n", uShort);

    printf("The  value of unsigned int = %u\n", UINT_MAX);
    printf("%u\n", uInt);

}

/**
 * @param y  ein zahl erhoht um 10
 */
void valuePrinzip(int y) {
    y += 10;
    printf("Der Wert in der Funktion erhoht um 10 = %d\n", y);
}

/**
 * Test von valuePrinzip()
 */
void valueVor(){
    char slak = '#';
    printf("Geben Sie einen Zahl ein , um 10 zu erhohen :-\n");
    int x;
    scanf("%d%c", &x ,&slak);
    if (slak == '#') {
        printf("Bitte geben Sie einen Zahl grosser als 0 \n");
        while (getchar() != '\n');  // clean stdin
        valueVor();
    }else{
        printf("\nDer Wert vor Funktion aufruf = %d\n", x);
        valuePrinzip(x);
        printf("Der Wert nach Funktion aufruf = %d\n", x);
    }


}

/**
 * Alle Methoden werden hier aufgerufen und diese Methode wird in main aufgeruft.
 * man kann sagen diese ist der Dilog-programm .
 */
void ausfuhren() {

    short run = 1;
    while (run == 1) {
        int auswalen;
        char slak = '#';
        printf("\nwahlen Sie einen Funktion aus:-\n");
        printf("%d:geldbeitrags , %d:fabonacci , %d:min & max , %d:ValuePrinzip , %d:Exit \n",
                                                            GELD, FABO, MIN_UND_MAX,VALUEPRINZIP ,ENDEN);
        scanf("%d%c", &auswalen, &slak);
        switch (auswalen) {
            case 1:
                geldbeitrags();
                break;
            case 2 :
                fabonacci();
                break;
            case 3:
                minUndMax();
                break;
            case 4:
                valueVor();
                break;
            case 0:
                printf("End programm");
                run = 0;
                break;
            default:
                printf("Bitte geben Sie gultige Nummer oder 0 Exit\n");
                break;
        }
        if (slak == '#') {
            while (getchar() != '\n');  // clean stdin
        }

    }
}



int main(void) {

    ausfuhren();

    return 0;
}