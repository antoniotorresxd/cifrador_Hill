

/**
 * It takes a string and returns an array of integers
 * 
 * @param cadena the string to be encrypted
 * @param lenght_vector is the length of the string_formatter array
 * 
 * @return a pointer to the first element of the array.
 */
int* module_27(char cadena[100], int *lenght_vector) {

    static int string_formatter[500];

    for (int i=0; i < strlen(cadena); i++) {
        string_formatter[i] = alphabet(toupper(cadena[i]));
    }

    if ( !(*lenght_vector % 3 == 0) ) {
        while ( !(*lenght_vector % 3 == 0) ) {
            string_formatter[*lenght_vector] = 26;
            *lenght_vector += 1; 
        }
    }

    return string_formatter;

}