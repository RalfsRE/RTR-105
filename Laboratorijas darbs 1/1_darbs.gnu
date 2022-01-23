Terminal type is now 'qt'
gnuplot> plot exp(x)
gnuplot> set terminal png

Terminal type is now 'png'
Options are 'nocrop enhanced size 640,480 font "arial,12.0" '
gnuplot> set output "labdarbs1"  
gnuplot> set xlabel "X"  
gnuplot> set ylabeel "Y"  
             ^
         unrecognized option - see 'help set'.

gnuplot> set title "f(x) = exp(x)"  
gnuplot> set xrange [-10:10]
gnuplot> set yrange [-10:10]
gnuplot> plot exp(x)
gnuplot> set terminal qt

Terminal type is now 'qt'
Options are '0 font "Sans,9"'
gnuplot> plot exp(x)
