Writing only characters and strings to a file can become tedious when you have an array or structure. To write entire blocks of memory to a file, there are the following binary functions:

Binary file mode options for the fopen() function are:
- rb open for reading (file must exist)
- wb open for writing (file need not exist)
- ab open for append (file need not exist)
- rb+ open for reading and writing from beginning
- wb+ open for reading and writing, overwriting file
- ab+ open for reading and writing, appending to file

fwrite(ptr, item_size, num_items, fp) Writes num_items items of item_size size from pointer ptr to the file pointed to by file pointer fp.

fread(ptr, item_size, num_items, fp) Reads num_items items of item_size size from the file pointed to by file pointer fp into memory pointed to by ptr.

fclose(fp) Closes file opened with file fp, returning 0 if close was successful. EOF is returned if there is an error in closing.
