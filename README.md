#NB
E' presente un errore nel caricamento, mancano le classi rhombus e rectangle. Inoltre sono presenti i file di altre classi non sviluppate per errore mio 
(ho iniziato a costruire un template per tutte poichè pensavo inizialmente di doverne fare di piu)

#GEOMETRY
In questa repository sono presenti le classi utili per gestire le caratteristiche specifiche di alcune forme geometriche.
Tutte queste sono figlie di una classe padre chiamata POLYGON, che ne definisce i caratteri comuni (area e perimetro) 
nonchè le funzioni da documentazione.
Le forme geometriche sono di seguito presentate:

##Rectangle
E' la classe usata per la gestione di oggetti rettangoli. E' una classe derivata da quella base polygon e contiene 
una funzione per il calcolo dell'area e del perimetro, nonchè del settaggio dei suoi parametri base e altezza

##Rhombus
E' la classe usata per la gestione di oggetti rombo. E' una classe derivata da quella base polygon e contiene 
una funzione per il calcolo dell'area e del perimetro e del lato, nonchè del settaggio dei suoi parametri diagonale 1 e 2

##IsoTriangle
E' la classe usata per la gestione di oggetti Triangoli isosceli. E' una classe derivata da quella base polygon e contiene 
una funzione per il calcolo dell'area e del perimetro e del lato obliquo, nonchè del settaggio dei suoi parametri base e altezza.
Funzioni Setters: SetBase(float b)
	          SetHeight(float h)
                  SetParam(float b, float h)
Funzioni Getters: float GetSide() 
                  float GetBase()
	          float GetHeight()
		  
		  
##Polygon
Classe base che rappresenta poligoni generici e 
definisce i metodi di calcolo per area e perimetro.
