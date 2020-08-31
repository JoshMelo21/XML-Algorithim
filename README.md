# XML-Algorithim
The files in this project read input xml tags and check to see whether they are valid or not and counts the amount of time a tag was input. The algorithm uses stacks and hashtables. The project has the make file include if you would like to make any changes and recompile.

by running the file part1Main.c you can enter XML tags and it will either validate or invalidate the entered tags. ONLY CHARACTERS CAN BE ENTERED.
e.g if you enter <a><b></b></a> this is valid. If <a><b></a></b> is entered this is invalid.

by running the file part2Main.c it includes all the functionality of part1 and also prints out how many times each tag was entered.
These 2 files both rely on inStack.c 

by running the part3Main.c file this improves on the part 2 file by allowing strings to be entered and not just characters. 
It also allows for stand alone tags (e.g <exampleTag/> is a opening and closing tag)
This file relies on stringStack.c and stringHashTable.c to function properly.
