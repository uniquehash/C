file=`find . -type f -name $1`
cat $file | grep -i "nicolas\tbomber" | grep -G -o "[0-9]\{3,3\}.\{0,1\}[0-9]\{3,3\}.\{0,1\}[0-9]\{4,4\}"
