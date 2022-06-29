# MyRunner

### Introduction

Le MyRunner est notre deuxième projet graphique. Le projet consiste à faire un jeu de type plateformer tel Mario Bross ou Geometry Dash.



### Fonctionnement

Le jeu fonctionne grâce à la lib graphique CSFML qui permet de gérer les inputs, afficher des sprites et lancer des sons ainsi que des musiques.

Le jeu est capable de charger une map à partir d'un fichier texte. Pour améliorer les performances, un système de création et destruction en temps réel est mis en place pour charger la map devant quand on avance et la décharger derrière lorsqu'on s'en éloigne. De cette manière, le nombre d'éléments chargés en mémoire est diminué ce qui rend l'exécution du jeu plus légère.



### Caractéristiques

Le projet contient les caractéristiques technique suivants

* Gestion d'événements tels des inputs.
* Sprites animées
* Objets en mouvement
* Tout mouvement et animations ne dépendent pas de la rapidité du pc grâce à l'utilisation d'une clock et d'un système de deltatime.

De plus l'ensemble des ressources du jeu sont inférieur à 15MB.

