//You can adjust the numbers to "increase?" the calculator's capacity.

#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *file= fopen("Calculator.c", "w");
	fprintf(file, "#include <stdio.h>\nint main(){\n\tint n1, n2;\n\tprintf(\"Please enter the first number: \");\n\tscanf(\"%%d\", &n1);\n\tprintf(\"Please enter the second number: \");\n\tscanf(\"%%d\", &n2);\n\tif(n1<0 || n2<0){\n\t\tprintf(\"\\nNegative numbers are not supported!\");\n\t\treturn 0;\n\t}\n\telse if(n1>99 || n2>99){\n\t\tprintf(\"\\nNumbers greater than 99 is not supported!\");\n\t\treturn 0;\n\t}");
	for(int i=0; i<100; i++){
		for(int j=0; j<100; j++){
			fprintf(file, "\n\tif(n1==%d && n2==%d){\n\t\tprintf(\"\\nThe answer is %d.\");\n\t}", i, j, i+j);
		}
	}
	fprintf(file, "\n\treturn 0;\n}");
	fclose(file);
	return 0;
}
