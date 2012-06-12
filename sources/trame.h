/* Structure d'une trame */
typedef struct {
  unsigned short int id; /* numero du paquet */
  unsigned short int seqf; /* numero de sequence */
  unsigned short int nbf; /* nombre de sequence */
  unsigned int length; /* longeur de charge */
  unsigned char * charge; /* contenue */
} Trame;

/* Initialiser et detruire une trame */
void trame_init(Trame ** t);
void trame_destroy(Trame ** t);

/* Decoder et encoder une trame */
int trame_decode(Trame * t, FILE * stream);
int trame_encode(FILE * stream, Trame * t);
