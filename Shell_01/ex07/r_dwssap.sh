#!/bin/sh
cat /etc/passwd | sed -e '/^#/ d' | sed -n 'n;p' | sed 's/:.*//' | rev | sort -r | awk -v "start=$FT_LINE1" -v "end=$FT_LINE2" 'NR >= start && NR <= end' | tr "\n" ", " | sed 's/, */, /g' | sed 's+, $+.+g' | tr -d '\n'
