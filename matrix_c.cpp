/**
 * It generates a random 3x3 matrix, and returns a pointer to the first element of the matrix
 * 
 * @param get_key if true, it will print the matrix key
 * 
 * @return a pointer to the first element of the array.
 */
int* matrix_key(bool get_key) {

    static int matrix_c[9];
    int pivote[3][3];
    int count2 = 0;

    srand(time(NULL));

    for (int i = 0; i < 9; i++) {
        matrix_c[i] = (rand() % 27);      
    } 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 ; j++) {    
            pivote[i][j] = matrix_c[count2];
            count2 +=1;
        }        
    }

    if ( get_key ) {
        printf("\nMatriz Llave: ");
        printf("\n");

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3 ; j++) {    
                printf("%i-", pivote[i][j]);
            }        
            printf("\n");
        }
    }

    return matrix_c;

}




