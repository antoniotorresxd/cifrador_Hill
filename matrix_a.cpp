int* matrix_a(int lenght_vector, int column, int matrix_string_formatter[100]) {

    static int matrix_a[500];

    for (int i = 0; i < (lenght_vector); i++) {
        matrix_a[i] = matrix_string_formatter[i]; // matriz lineal de a
    }

    return matrix_a;

}