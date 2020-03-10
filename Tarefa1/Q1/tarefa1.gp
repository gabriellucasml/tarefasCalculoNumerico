set terminal png
set output "tarefa1.png"
set xzeroaxis ls -1
set yzeroaxis ls -1
set grid
set xrange[-1.5:2.5]
plot x**3-2*x**2-x+2 title "função quadrática", -2*x+2 title "reta tangente", "pontos.txt" title "pontos críticos", 0*x - 0.631130309441 title "reta tangente ao mínimo local", x*0 + 2.11261179092 title "reta tangente ao máximo local"
