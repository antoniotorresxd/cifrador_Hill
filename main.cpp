#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#include "alphabet.cpp"
#include "module_27.cpp"

#include "matrix_a.cpp"
#include "matrix_c.cpp"
#include "matrix_ca.cpp"
#include "inversa.cpp"

#include "decodificador.cpp"
#include "cifrador.cpp"




main() {

    int opt;
    int opt2;
    char cadena[] = "Prologo a la Autobiografia de Bertrand Russell Tres pasiones simples pero abrumadoramente intensas han gobernado mi vida el ansia de amor la busqueda del conocimiento y una insoportable piedad por el sufrimiento de la humanidad";
    int key[3][3];
    char matrix_cifrado[3][500];

    
    char msj_cifrado[] = "BNELYDFMYIDPQHSPOOOPYHNMZKPIHVTTIASZIZKIMYCEJURKYAOEGEHWBTGGQBYYBOCQZXZJFMYPKJYYAOMPFX BK JFGTGYYWRXOATWJTTIFJCOSJUSGHYBMTZN LBGOKROBVKCHOWTVPJTVLIMEFRNGXTUGBDNKSELZXYVUOKQTELKENTWCRMSWKZRMGYJKWSXOHIMJIZXNKSELZOAADBPEODNGHYPHMEL";

    do {

        printf("\n1.- Codificar mensaje ");
        printf("\n2.- Decodificar mensaje ");
        printf("\n3.- Generar matriz llave ");
        printf("\n0.- Salir ");

        printf("\nIngresa una opcion: "); 
        scanf("%i", &opt);

        switch (opt) {
    
            case 1:

                printf("\n1.- Si");
                printf("\n0.- No");
                printf("\nQuieres generar una matriz llave?: ");
                scanf("%i", &opt2);

                if (opt2 == 1) {

                    matrix_key(true);

                } else {

                    for (int i = 0; i < 3; i++) {

                        for(int j = 0; j < 3; j++) {
                            printf("\nIngresa el valor de la posicion %i,%i: ", i,j);
                            scanf("%i", &key[j][i]);
                        }

                        printf("\n");
                    }
                }

                cifrador(cadena, key, true, true);

            break;

            case 2:

                for (int i = 0; i < 3; i++) {

                    for(int j = 0; j < 3; j++) {
                            printf("\nIngresa el valor de la posicion %i,%i: ", i,j);
                            scanf("%i", &key[j][i]);
                        }

                        printf("\n");
                    }

                decodificador(msj_cifrado, key, false);

            break;

            case 3:

                matrix_key(true);

            break;

            case 0:
            break;
            
            default:
                printf("Opcion no valida");
            break;

        }

    } while(opt != 0);


   printf("\nPrograma finalizado. ");


}