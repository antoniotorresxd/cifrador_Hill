
int* matrix_ab( int matrix_c[9], int matrix_a[500], int column_a) {

    int fila = 3;
    int column = column_a;

    int new_matrix_A[3][column_a];
    int new_matrix_C[3][3];

    int matrix_res[3][column];
    static int matrix_res_lineal[500];

    int count = 0;

    // matriz bidimensional a

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < column ; j++) {          
            new_matrix_A[i][j] = matrix_a[count];
            count += 3;
        }        
        count = 1 + i;
    }

    // printf("\nMatriz a: ");
    // printf("\n");

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < column ; j++) {    
    //         printf("%i-", new_matrix_A[i][j]);
    //     }        
    //     printf("\n");
    // }

    // matriz bidimensional c

    count = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 ; j++) {          
            new_matrix_C[i][j] = *(matrix_c+count);
            count += 3;
        }        
        count = 1 + i;
    }
    
    // printf("\nMatriz c: ");
    // printf("\n");

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3 ; j++) {    
    //         printf("%i-", new_matrix_C[i][j]);
    //     }        
    //     printf("\n");
    // }


    // matriz bidimensional res

    for (int a = 0; a < column; a++) {
        for (int i = 0; i < 3; i++) {
            int suma = 0;
            for (int j = 0; j < 3; j++) {
                suma += new_matrix_C[i][j] * new_matrix_A[j][a];
            }
            matrix_res[i][a] = suma;
        }
    }

    // printf("\nMatriz res bidimencional: ");
    // printf("\n");

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < column ; j++) {    
    //         printf("%i-", matrix_res[i][j]);
    //     }        
    //     printf("\n");
    // }

    // matriz lineal res

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

    // printf("Matriz res:");

    // for(int i=0; i<3*column; i++) {
    //     printf("%i_", matrix_res_lineal[i]);
    // }

    return matrix_res_lineal;

}