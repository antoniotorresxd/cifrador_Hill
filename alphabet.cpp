
/**
 * It converts the alphabet to a number.
 * 
 * @param letter The letter to be converted to a number.
 * 
 * @return The letter -1
 */
int alphabet(char letter) {

    switch (letter) {

        case 'A':
            letter = 1;
        break;

        case 'B':
            letter = 2;
        break;

        case 'C':
            letter = 3;
        break;

        case 'D':
            letter = 4;
        break;

        case 'E':
            letter = 5;
        break;

        case 'F':
            letter = 6;
        break;

        case 'G':
            letter = 7;
        break;

        case 'H':
            letter = 8;
        break;

        case 'I':
            letter = 9;
        break;

        case 'J':
            letter = 10;
        break;

        case 'K':
            letter = 11;
        break;

        case 'L':
            letter = 12;
        break;

        case 'M':
            letter = 13;
        break;

        case 'N':
            letter = 14;
        break;

        case 'O':
            letter = 15;
        break;

        case 'P':
            letter = 16;
        break;

        case 'Q':
            letter = 17;
        break;

        case 'R':
            letter = 18;
        break;

        case 'S':
            letter = 19;
        break;

        case 'T':
            letter = 20;
        break;

        case 'U':
            letter = 21;
        break;

        case 'V':
            letter = 22;
        break;

        case 'W':
            letter = 23;
        break;

        case 'X':
            letter = 24;
        break;

        case 'Y':
            letter = 25;
        break;

        case 'Z':
            letter = 26;
        break;

        case ' ':
            letter = 27;
        break;
        
        default:
            letter = 26;
        break;

    }

    return ( letter -1 ) ;

}

/**
 * It takes a number and returns the corresponding letter of the alphabet.
 * 
 * @param number The number to be converted to a letter.
 * 
 * @return A letter.
 */
char alphabet_reverse(int number) {

    char letter;

    switch (number) {

        case 0:
            letter = 'A';
        break;

        case 1:
            letter = 'B';
        break;

        case 2:
            letter = 'C';
        break;

        case 3:
            letter = 'D';
        break;

        case 4:
            letter = 'E';
        break;

        case 5:
            letter = 'F';
        break;

        case 6:
            letter = 'G';
        break;

        case 7:
            letter = 'H';
        break;

        case 8:
            letter = 'I';
        break;

        case 9:
            letter = 'J';
        break;

        case 10:
            letter = 'K';
        break;

        case 11:
            letter = 'L';
        break;

        case 12:
            letter = 'M';
        break;

        case 13:
            letter = 'N';
        break;

        case 14:
            letter = 'O';
        break;

        case 15:
            letter = 'P';
        break;

        case 16:
            letter = 'Q';
        break;

        case 17:
            letter = 'R';
        break;

        case 18:
            letter = 'S';
        break;

        case 19:
            letter = 'T';
        break;

        case 20:
            letter = 'U';
        break;

        case 21:
            letter = 'V';
        break;

        case 22:
            letter = 'W';
        break;

        case 23:
            letter = 'X';
        break;

        case 24:
            letter = 'Y';
        break;

        case 25:
            letter = 'Z';
        break;

        case 26:
            letter = ' ';
        break;
        
        default:
            letter = ' ';
        break;

    }

    return ( letter ) ;

}