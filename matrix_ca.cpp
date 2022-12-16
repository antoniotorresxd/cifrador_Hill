
/**
 * It takes a 3x3 matrix and a 3xN matrix and returns a 3xN matrix
 * 
 * @param matrix_c is a 3x3 matrix
 * @param matrix_a is a matrix origin
 * @param column_a number of columns of matrix a
 * 
 * @return a pointer to the first element of the array.
 */
int* matrix_ab( int matrix_c[9], int matrix_a[500], int column_a) {

    int fila = 3;
    int column = column_a;

    int new_matrix_A[3][column_a];
    int new_matrix_C[3][3];

    int matrix_res[3][column];
    static int matrix_res_lineal[500];

    int count = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < column ; j++) {          
            new_matrix_A[i][j] = matrix_a[count];
            count += 3;
        }        
        count = 1 + i;
    }

    count = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 ; j++) {          
            new_matrix_C[i][j] = *(matrix_c+count);
            count += 3;
        }        
        count = 1 + i;
    }
    
    for (int a = 0; a < column; a++) {
        for (int i = 0; i < 3; i++) {
            int suma = 0;
            for (int j = 0; j < 3; j++) {
                suma += new_matrix_C[i][j] * new_matrix_A[j][a];
            }
            matrix_res[i][a] = suma;
        }
    }

    count = 0;
 
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < column ; j++) { 

            matrix_res_lineal[count] = matrix_res[i][j];
            count += 3; 

            if ( count >= ((3*column)) )  {
                count = i + 1;
            }
            
        }     
        
    }

    return matrix_res_lineal;

}