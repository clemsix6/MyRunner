# MyRunner

### Introduction

Le MyRunner est notre deuxième projet graphique. Le projet consite a faire un jeu de type plateformer tel Mario Bross ou Geometry Dash.



### Fonctionnement

Le jeu fonctionne grâce à la lib graphique CSFML qui permet de gérer les inputs, affichier des sprites et lancer des sons ainsi que des musiques.

Le jeu est capable de charger une map à partir d'un fichier text. Pour acroire les performance un système de création et destruction en temps réel est mis en place pour charger la map devant quand on avance et la décharger derrière lors qu'on s'en éloigne. De cette manière le nombre d'éléments chargés en mémoire est diminué ce qui rends l'execution du jeu plus légère.



### Caractéristiques

Le projet contient les caractéristiques technique suivants

* Gestion d'évenements tels des inputs.
* Sprites animmés
* Objets en mouvement
* Tous mouvements et animations ne dépendent pas de la rapidité du pc grâce à l'utilisation d'une clock et d'un système de deltatime.

De plus l'enssemble des resources du jeu sont inferieur à 15MB.

