file=`find . -type f -name "bomb.txt"`
time=`stat -f %a $file`
let "a = ($time - 1)"
echo $a 
