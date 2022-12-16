char* cifrador(char cadena[], int key[3][3], bool get_key, bool view_message) {

    // converitr la cadena de texto a sistema 27

    int lenght_vector = strlen(cadena);
    
    int *cadena_module_27 = module_27(cadena, &lenght_vector);

    // converir la cadena a la matriz a

    int matrix_A[lenght_vector];
    int column = (lenght_vector / 3);
    int *string_a = matrix_a(lenght_vector, column, cadena_module_27);

    for (int i = 0; i < lenght_vector; i++) {
        matrix_A[i] = *(string_a+i); // matriz lineal de a
    }

    // for (int i = 0; i < lenght_vector; i++) {
    //     printf("%i_", matrix_A[i]);
    // }

    // obtener la matriz c/llave

    int matrix_C[9];
    int count = 0;

    if (get_key) {

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix_C[count] = key[i][j];
                count++;
            }
        }

    } else {

        int *string_c = matrix_key(false); 

        for (int i = 0; i < 9; i++) {
            matrix_C[i] = *(string_c+i); // matriz lineal de c
        }
    }


    // for (int i = 0; i < 9; i++) {
    //     printf("%i_", matrix_C[i]);
    // }


    // multiplicacion de vectores c*a.

    int matrix_res[3*column];
    int *ab = matrix_ab(matrix_C, matrix_A, column);

    for (int i = 0; i < 3 * column; i++) {
        matrix_res[i] = (*(ab + i) % 27) ; // matriz lineal de res
    }

    // for (int i = 0; i < 3 * column; i++) {
    //     printf("%i_", matrix_res[i]);
    // }

    // matriz de cadena cifrada
    static char matrix_cifrado[500];

    for (int i = 0; i < 3 * column; i++) {
        matrix_cifrado[i] = alphabet_reverse(matrix_res[i]);
    }


    if ( view_message ) {
        printf("\nmensaje cifrado: ");
        for (int i = 0; i < 3 * column; i++) {
            printf("%c", matrix_cifrado[i]);
        }
        printf("\n");
    }

    //return matrix_cifrado;

}
