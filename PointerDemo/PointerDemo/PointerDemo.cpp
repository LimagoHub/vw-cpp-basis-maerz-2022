// PointerDemo.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <stdlib.h>
#include <memory.h>

int stringlenght(const char *source)
{
	register int length = 0;
	while (source[length]) length++;
	return length;
}


void stringcopy(const char* source, char* destination)
{
	while (*destination++ = *source++);

	
}

char * string_copy_zwei(const char* source)
{
	// char* resultbuffer = (char *) malloc((stringlenght(source) + 1) * sizeof(char));
	//memset(resultbuffer, 0, (stringlenght(source) + 1) * sizeof(char));

	char* resultbuffer = new char[stringlenght(source) + 1];
	memset(resultbuffer, 0, (stringlenght(source) + 1) * sizeof(char));
	
	*resultbuffer = 'a';
	return resultbuffer;
}



int main()
{

	char buffer[] = "Hallo";
	
	
	
	char* ptr = string_copy_zwei(buffer);
	
	
	
	std::cout << ptr << std::endl;

	delete []ptr;
	//free(ptr);
}

