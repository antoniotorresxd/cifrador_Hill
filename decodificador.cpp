/**
 * It takes a string, a 3x3 matrix, and a boolean as arguments, and returns a string
 * 
 * @param cadena the string to be decoded
 * @param key the key matrix
 * @param view_message if true, it will print the message, if false, it will not print the message.
 */
char decodificador(char cadena[], int key[3][3], bool view_message) {

    int lenght_vector = strlen(cadena);
    int column = (lenght_vector / 3);

    int matrix_a[lenght_vector];
    int matrix_c[9];
    int matrix_res[3][column];

    for (int i = 0; i < lenght_vector; i++) {
        matrix_a[i] = alphabet(cadena[i]); // matriz a
    }

    int *inv_c = inversaMatrixC(key);
    
    for (int i = 0; i < 9; i++) {
        matrix_c[i] = *(inv_c + i);
    }

    int *matrix_ca = matrix_ab(matrix_c, matrix_a, column);

    printf("Codigo decifrado: ");
    for (int i = 0; i < lenght_vector; i++) {
        printf("%c", alphabet_reverse((*(matrix_ca +i) %27)) ); 
    }

    printf("\n");

}