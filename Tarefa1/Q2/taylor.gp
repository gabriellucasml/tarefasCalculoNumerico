set terminal png
set output "taylor.png"
set xzeroaxis ls -1
set yzeroaxis ls -1
set grid
set xrange[-6:6]
set yrange[-6:8]
plot x*cos(x) + 1 title "função original", 1 + x - (x**3)/2 + (x**5)/24 - (x**7)/720 + (x**9)/40320 - (x**11)/3628800 title "série de taylor de grau 11"
