ldapsearch -LLL -Q 'uid=z*' | grep -i 'cn:' | sort -r | sed 's/cn: //'
