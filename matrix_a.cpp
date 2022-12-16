/**
 * It takes a vector of integers, and returns a pointer to an array of integers
 * 
 * @param lenght_vector the number of elements in the matrix
 * @param column number of columns of the matrix
 * @param matrix_string_formatter is a vector that contains the values of the matrix in string format.
 * 
 * @return a pointer to the first element of the array.
 */
int* matrix_a(int lenght_vector, int column, int matrix_string_formatter[100]) {

    static int matrix_a[500];

    for (int i = 0; i < (lenght_vector); i++) {
        matrix_a[i] = matrix_string_formatter[i];
    }

    return matrix_a;

}