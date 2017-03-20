# Anagram Kata


Etant donné une liste alphabétique de mots, ressemblant a ceci :
```
BELOUGA
BONJOUR
BOULAGE
CINTRAGE
DEMAIN
DEMOCRATIE
GABELOU
GRACIENT
PARDON
RECULER
ULCERER
```  

Ecrire un programme qui prend cette liste en input et donne en output les mots en les regroupant par anagramme

Dans notre exemple, on doit donner en output :
```
BELOUGA - BOULAGE - GABELOU
BONJOUR
DEMAIN
DEMOCRATIE
CINTRAGE - GRACIENT
PARDON
RECULER - ULCERER
```

2) Quelle est la complexité de cet algorithme ( O(n), O(n^2), O(n^3) ) ou autre ?
   Pouvez-vous imaginer une version plus performante ?

3) Faire fonctionner le code sur le fichier [resources/wordlist.txt](resources/wordlist.txt) dont voici un extrait :
```
Acrilans
Acropolis
Acrux
Acrux's
Act
Actaeon
Actinomyces
Actinomyces's
Actinozoa
Actinozoa's
Actium
Actium's
```

4) Question subsidiaires

i. Combien de temps mettra l'exécution sur le fichier wordlist.txt. 
Peut-on faire mieux ?

ii. Afficher les résultats du fichier wordlist.txt en les triant par ordre décroissant de "nombre d'anagrammes"

