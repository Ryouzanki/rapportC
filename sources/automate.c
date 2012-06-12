while (state < 9 && state > -1) {
    pending = fgetc(stream); /* Lecture d'un caractere */
    if (pending == EOF) {
        fprintf(stderr, "trame_decode: error in fgetc\n");
        state = -1;
    } else {
        switch (state) {
            // Attente du premier fanion
            case 0:
                if (pending == FANION) {
                    state++; /* On passe a l'etat suivant */
                } else {
                    fprintf(stderr, "trame_decode: [...]\n");
                    state = -1;
                }
                break;
        }
    }
}
