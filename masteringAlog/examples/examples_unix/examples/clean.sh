#/bin/bash

for i in `ls`
do
	if [ -d $i ];then
		echo $i
		make -C $i clean
	fi
done
