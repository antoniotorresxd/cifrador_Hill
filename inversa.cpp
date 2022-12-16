
/**
 * It calculates the adjoint of a 3x3 matrix.
 * 
 * @param key the key matrix
 * 
 * @return a pointer to the first element of the array.
 */
int* adjunta(int key[3][3] ) {

    static int cofA[9];

    int cof1 = ( (key[1][1] * key[2][2]) - ( key[1][2] * key[2][1] ) ) * (1);
    int cof2 = ( (key[1][0] * key[2][2]) - ( key[1][2] * key[2][0] ) ) * (-1);
    int cof3 = ( (key[1][0] * key[2][1]) - ( key[1][1] * key[2][0] ) ) * (1);
    int cof4 = ( (key[0][1] * key[2][2]) - ( key[0][2] * key[2][1] ) ) * (-1);
    int cof5 = ( (key[0][0] * key[2][2]) - ( key[0][2] * key[2][0] ) ) * (1);
    int cof6 = ( (key[0][0] * key[2][1]) - ( key[0][1] * key[2][0] ) ) * (-1);
    int cof7 = ( (key[0][1] * key[1][2]) - ( key[0][2] * key[1][1] ) ) * (1);
    int cof8 = ( (key[0][0] * key[1][2]) - ( key[1][0] * key[0][2] ) ) * (-1);
    int cof9 = ( (key[0][0] * key[1][1]) - ( key[0][1] * key[1][0] ) ) * (1);

    cofA[0] = cof1;
    cofA[3] = cof2;
    cofA[6] = cof3;
    cofA[1] = cof4;
    cofA[4] = cof5;
    cofA[7] = cof6;
    cofA[2] = cof7;
    cofA[5] = cof8;
    cofA[8] = cof9;

    return cofA;

}

/**
 * The function takes a 3x3 matrix as an argument and returns the determinant of the matrix.
 * 
 * @param matrix_key The matrix that will be used to calculate the determinant.
 * 
 * @return The determinant of the matrix.
 */
int determinant(int matrix_key[3][3]) {

    int determinante =  (matrix_key[0][0] * matrix_key[1][1] * matrix_key[2][2]) + (matrix_key[0][1] * matrix_key[1][2] * matrix_key[2][0]) + (matrix_key[0][2] * matrix_key[1][0] * matrix_key[2][1]) - (matrix_key[0][2] * matrix_key[1][1] * matrix_key[2][0]) - (matrix_key[0][0] * matrix_key[1][2] * matrix_key[2][1]) - (matrix_key[0][1] * matrix_key[1][0] * matrix_key[2][2]);

    return determinante;

}

/**
 * It takes a 3x3 matrix and returns a new 3x3 matrix that is the inverse of the original matrix
 * 
 * @param key the key matrix
 * 
 * @return a pointer to the first element of the array new_matrix_c.
 */
int* inversaMatrixC(int key[3][3]) {

    int *matrix_adjunta = adjunta(key);
    int determinate = determinant(key);
    static int new_matrix_c[9];
    int c = 2;
    int piv = 27;

    if (determinate != 0) {

        for(int i = 0; i < 9; i++) {

            int modulo = ( (*(matrix_adjunta + i) / determinate) ) ;

            if (modulo < 0) {
                
                if ( 27 > (modulo * -1) ) {

                    modulo = 27 + modulo;

                } else {

                    piv = 27;
                    c = 2;

                    while ( piv < (modulo * -1) ) {
                        piv = 27 * c;
                        c++;
                        modulo = piv + modulo;
                    }

                }

            } else {
                modulo = modulo % 27;
            }

            new_matrix_c[i] = modulo ;

        }

    } else {
        printf("\nMatriz invalida\n");
    }


    return new_matrix_c;

}