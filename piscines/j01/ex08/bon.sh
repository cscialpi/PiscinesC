ldapsearch -Q 'sn=*bon*' | grep ^sn | cut -d : -f 2 | wc -l | tr -d " "
