

int* module_27(char cadena[100], int *lenght_vector) {

    static int string_formatter[500];

    for (int i=0; i < strlen(cadena); i++) {
        string_formatter[i] = alphabet(toupper(cadena[i]));
    }

    // hacer la cadena multiplos de 3

    if ( !(*lenght_vector % 3 == 0) ) {
        while ( !(*lenght_vector % 3 == 0) ) {
            string_formatter[*lenght_vector] = 26;
            *lenght_vector += 1; 
        }
    }

    return string_formatter;

}