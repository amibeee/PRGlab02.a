/* ---------------------------
Laboratoire : 03
Auteur(s) : Nour El Islam Zarif
Date : 23/09/2026
But : Bureau de change
Remarque(s) :
--------------------------- */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

   const double soldeInitial = 1000.0;
   const double tauxChange    = 1.024;
   const double frais         = 5.0;

   string numeroCompte;
   string nom;
   double sommeEuro;
   double sommeChf;
   double solde = soldeInitial;

   cout << "numero de compte: " << endl;
   cin  >> numeroCompte;
   cout << "nom de famille: " << endl;
   cin  >> nom;

   cout << "solde de compte chf: " << solde << endl;
   cout << "taux de change: 1 chf = " << tauxChange << " euro" << endl;
   cout << "frais d operation: " << frais << " chf" << endl;
   cout << "saisir la somme souhaitee en euro :" << endl;
   cin  >> sommeEuro;

   sommeChf = round(sommeEuro / tauxChange * 100) / 100;

   solde = solde - sommeChf - frais;
   cout << "somme chf : " << sommeChf << " & solde compte : " << solde << endl;

   cout << "+---------------------------+" << endl;
   cout << "| " << nom<< endl;
   cout << "| " << numeroCompte << endl;
   cout << "| somme euro     : " << sommeEuro   << endl;
   cout << "| 1 chf en euro  : " << tauxChange << endl;
   cout << "| somme ch       : " << sommeChf    << endl;
   cout << "| frais          : " << frais       << endl;
   cout << "| solde compte   : " << solde       << endl;
   cout << "+---------------------------+" << endl;

   return EXIT_SUCCESS;
}
