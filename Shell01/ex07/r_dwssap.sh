#!/bin/sh
cat /etc/passwd | grep --invert-match "#" | awk "NR%2"==0 | cut -d ':' -f 1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ','| sed -e 's/,/, /g' | sed -e 's/, $/./g' | tr -d '\n'
