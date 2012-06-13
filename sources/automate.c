while (state < 9 && state > -1) {
    pending = fgetc(stream); /* Lecture d'un caractere */
    if (pending == EOF) {
        fprintf(stderr, "trame_decode: error in fgetc\n");
        state = -1;
    } else {
        switch (state) {
            case 0: // Attente du premier fanion
                if (pending == FANION) {
                    state++; /* On passe a l'etat suivant */
                } else {
                    state = -1;
                }
                break;
        }
    }
}
