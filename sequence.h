extern void printSequence (Sequence S);
extern void add(Sequence *S, int x, unsigned int i);
extern void ajoutTete(Sequence *S, int x);
extern void ajoutQueue(Sequence *S, int x);
extern void supprimer(Sequence *S, unsigned int i);
extern void supprimerTete(Sequence *S);
extern void supprimerQueue(Sequence *S);
extern int findElement(Sequence *S, int x);
extern int estVide(Sequence *S);
extern int estTriee(Sequence *S);