# progintro/hw0-sdi2100186

Το πρόγραμμα λύνει επαναλαμβανόμενες εκδοχές του προβλήματος του τρόλεϊ,
όπως θα χρειαζόταν να τις λύσει και ένας αυτόματος πιλότος σε ένα αυτοκινούμενο όχημα.
Ζητάει συνεχώς από τον χρήστη τα κόστη για να κινηθεί "αριστερά" και "δεξιά" και στη συνέχεια επιλέγει την κατεύθυνση με το χαμηλότερο κόστος. 
Αν ο χρήστης εισάγει άκυρη είσοδο ή υπερβεί τα καθορισμένα όρια, το πρόγραμμα τερματίζεται. 
Αρχικά ορίζουμε το επιτρεπόμενο εύρος (−10^18 έως 10^18) για τα κόστη αριστερά και δεξιά (τιμές τύπου long long) με τη χρήση μάκροεντολών MIN και MAX.
Αν οποιοδήποτε κόστος βρίσκεται εκτός αυτού του εύρους, το πρόγραμμα τερματίζεται με κωδικό εξόδου (exit code) 1.
Σε κάθε επανάληψη του προβλήματος το πρόγραμμά ζητάει από τον χρήστη να δώσει τα κόστη για δύο επιλογές: αν πάει αριστερά (left) ή αν πάει δεξιά (right).
Το πρόγραμμά ζητάει το κόστος για την αριστερή επιλογή πρώτα και στην συνέχεια για την δεξιά. Τα κόστη που θα δώσει ο χρήστης διαχωρίζονται με νέα γραμμή (new line).
Το πρόγραμμά διαβάζει όλα τα κόστη που έδωσε ο χρήστης μέχρι το τέλος αρχείου (End Of File - EOF).
Αν ο χρήστης δώσει EOF αντί για το πρώτο κόστος το πρόγραμμά τερματίζει με κωδικό εξόδου (exit code) 0.
Για κάθε δύο κόστη που δίνονται, το πρόγραμμά τυπώνει στην πρότυπη έξοδο (stdout) είτε Go left είτε Go right - διαλέγοντας πάντα την επιλογή με το μικρότερο κόστος.
Αν οι δύο επιλογές έχουν το ίδιο κόστος, το πρόγραμμά τυπώνει Go left.

 
