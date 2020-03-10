set terminal png
set output "tarefa2.png"
set xzeroaxis ls -1
set yzeroaxis ls -1
set grid
set xrange[-6:6]
plot "pontosAproximados.pts" with lp title "Pontos Aproxiamdos", x*cos(x)+1 title "função real"
