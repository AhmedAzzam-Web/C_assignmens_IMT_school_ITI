#!/bin/bash

for i in {0..12}; do
	src="E:/programming/embedded-systems/C programming/C Pool/07-pointers/p$i/des_p$i.pdf"
    	dest="E:/programming/c_assignments/C_assignmens_IMT_school_ITI/2- PS_and_pointers/p$i/"

	# -p means if directory does not exist and quotes prevents space in between 2- and PS_and_pointer
	mkdir -p "$dest"

	cp "$src" "$dest"

	if [[ $? -eq 0 ]]; then
		echo "Successfully copied"
	else
		echo "Failed to copy des_p$i.pdf"
	fi
done

	

