Terminal type is now 'qt'
gnuplot> set output "labdarbs4.png"  
gnuplot> set title "f(x) = exp(x)"  
gnuplot> set xrange [-10:10]
gnuplot> set terminal qt

Terminal type is now 'qt'
Options are '0 font "Sans,9"'
gnuplot> plot exp(x),\ 
>[-10:10] exp(x) notitle w filledc below,\
>[-10:10] exp(x) notitle w filledc above
Closing labdarbs4.png
gnuplot> set terminal png

Terminal type is now 'png'
Options are 'nocrop enhanced size 640,480 font "arial,12.0" '
