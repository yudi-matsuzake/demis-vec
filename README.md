demis-vec
----------

Proof of concept based on an inside joke from bad coding practices. Obviously, should not be considered good development practice and should almost certainly not be used for "real work".

# USAGE

```c

#include <stdio.h>
#include "demis.h"

int main(int argc, char** argv){
	// 1 arg: type
	// 2 arg: prefix
	// 3 n:  0-1024
	demis_vec(int, var, 10)
	
	var0 = 0;
	var1 = 1;
	var2 = 2;
	var3 = 3;
	var4 = 4;
	var5 = 5;

	var6 = var5 + var4;
	var7 = var6 + var5;
	var8 = var7 + var6;
	var9 = var8 + var7;

	printf("%d\n", var0);
	printf("%d\n", var1);
	printf("%d\n", var2);
	printf("%d\n", var3);
	printf("%d\n", var4);
	printf("%d\n", var5);
	printf("%d\n", var6);
	printf("%d\n", var7);
	printf("%d\n", var8);
	printf("%d\n", var9);

	return 0;
}

```
