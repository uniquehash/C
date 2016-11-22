ifconfig | grep "ether " | sed "s/^.[ethr]* //" | sed 's/ //'
