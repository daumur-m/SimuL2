Ce programme va nous permettre de déterminer une approximation de pi à
l'aide des méthodes de Monte Carlo. ( Ou statistical random sampling )
Afin de générer le programme, placez vous tout d'abord dans le bon
répertoire et écrivez dans votre terminal :

--	make simuPi

Cela aura pour but de compiler notre code en un fichier exécutable que
vous pourrez appeler en tapant :

--	./simuPi

Le programme ainsi lancé affichera alors pour les paramètres de bases :

			---		---
			
	Nombre de point : 			1.000.000
	Nombre d’itération : 			100
	Nombre d’utilisation de la fonction : 	5

 ———————————————————————————————————————————————————————————————————————
|									|
|	time ./simuPi							|
|	Moyenne sur 100 itérations de 1000000 lancers.			|
|									|
|	  Tirage 1: 							|
|	        Résultat de Pi :	3.141245 			|
|	        Rayon de confiance :    3.140915 - 3.141576 		|
|									|
|	  Tirage 2:							|
|	        Résultat de Pi :	3.141861			|
|	        Rayon de confiance :    3.141522 - 3.142200 		|
|									|
|	  Tirage 3:							|
|	        Résultat de Pi :	3.141550			|
|	        Rayon de confiance :    3.141245 - 3.141854 		|
|									|
|	  Tirage 4:							|
|	        Résultat de Pi :	3.141532			|
|	        Rayon de confiance :    3.141209 - 3.141854 		|
|									|
|	  Tirage 5:							|
|	        Résultat de Pi :	3.141734			|
|	        Rayon de confiance :    3.141393 - 3.142074 		|
|									|
 ———————————————————————————————————————————————————————————————————————

 			---		---

	Nombre de point : 			1.000
	Nombre d’itération : 			1.000
	Nombre d’utilisation de la fonction : 	5

 ———————————————————————————————————————————————————————————————————————
|									|
|	time ./simuPi							|
|	Moyenne sur 1000 itérations de 1000 lancers.	  		|
|									|
|	  Tirage 1: 							|
|	        Résultat de Pi :	3.144760 			|
|	        Rayon de confiance :    3.141628 - 3.147892 		|
|									|
|	  Tirage 2:							|
|	        Résultat de Pi :	3.139896			|
|	        Rayon de confiance :    3.136634 - 3.143158 		|
|									|
|	  Tirage 3:							|
|	        Résultat de Pi :	3.142288			|
|	        Rayon de confiance :    3.139039 - 3.145537 		|
|									|
|	  Tirage 4:							|
|	        Résultat de Pi :	3.142120			|
|	        Rayon de confiance :    3.138822 - 3.145418 		|
|									|
|	  Tirage 5:							|
|	        Résultat de Pi :	3.141734			|
|	        Rayon de confiance :    3.141393 - 3.142074 		|
|									|
 ———————————————————————————————————————————————————————————————————————
