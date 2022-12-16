/**
 * It takes a string, a 3x3 matrix, and two booleans, and returns a string
 * 
 * @param cadena the string to be encrypted
 * @param key the key matrix
 * @param get_key if true, the key is passed as a parameter, if false, the key is generated randomly.
 * @param view_message if true, it will print the message.
 */
char* cifrador(char cadena[], int key[3][3], bool get_key, bool view_message) {

    int lenght_vector = strlen(cadena);
    int *cadena_module_27 = module_27(cadena, &lenght_vector);
    int matrix_A[lenght_vector];
    int column = (lenght_vector / 3);
    int *string_a = matrix_a(lenght_vector, column, cadena_module_27);

    for (int i = 0; i < lenght_vector; i++) {
        matrix_A[i] = *(string_a+i);
    }

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
            matrix_C[i] = *(string_c+i);
        }
    }

    int matrix_res[3*column];
    int *ab = matrix_ab(matrix_C, matrix_A, column);

    for (int i = 0; i < 3 * column; i++) {
        matrix_res[i] = (*(ab + i) % 27) ;
    }

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

}
