find . -type f -iname "*.sh" | sed "s/.*\/\{1,\}[^a-z\-_0-9]*//g" | sed "s/\.[a-z]\{1,\}//g"
