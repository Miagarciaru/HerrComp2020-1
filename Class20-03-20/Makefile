# $^ -> Primera dependencia
# $< -> Todas las dependencias
# $@ -> El nombre del Target

all : sumas.x datos.txt

sumas.x : sumas.cpp
	g++ $^ -o $@

datos.txt : sumas.x
	./sumas.x > datos.txt

sumas.pdf : datos.txt plotfigure.gp
	gnuplot plotfigure.gp 

clean:
	rm -f datos.txt sumas.x a.out
