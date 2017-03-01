set terminal png transparent size 640,240
set size 1.0,1.0

set terminal png transparent size 640,480
set output 'lines_of_code_by_author.png'
set key left top
set yrange [0:]
set xdata time
set timefmt "%s"
set format x "%Y-%m-%d"
set grid y
set ylabel "Lines"
set xtics rotate
set bmargin 6
plot 'lines_of_code_by_author.dat' using 1:2 title "Blain Smith" w lines, 'lines_of_code_by_author.dat' using 1:3 title "Kristoffer Walker" w lines, 'lines_of_code_by_author.dat' using 1:4 title "Erik Straub" w lines, 'lines_of_code_by_author.dat' using 1:5 title "Al Jachimiak" w lines, 'lines_of_code_by_author.dat' using 1:6 title "Beard of War" w lines, 'lines_of_code_by_author.dat' using 1:7 title "Kris Walker" w lines, 'lines_of_code_by_author.dat' using 1:8 title "Patrick McConnell" w lines, 'lines_of_code_by_author.dat' using 1:9 title "m/" w lines, 'lines_of_code_by_author.dat' using 1:10 title "Heisenbeard" w lines, 'lines_of_code_by_author.dat' using 1:11 title "Brian Corrigan" w lines, 'lines_of_code_by_author.dat' using 1:12 title "john.henderson" w lines, 'lines_of_code_by_author.dat' using 1:13 title "Seth Louey" w lines, 'lines_of_code_by_author.dat' using 1:14 title "MattxDamon" w lines, 'lines_of_code_by_author.dat' using 1:15 title "Matt Barth" w lines
