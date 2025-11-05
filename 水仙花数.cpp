#include<stdio.h>
int main(){
int g, s, b, n;
for (n = 100;n <= 999;n++) {
	g = n % 10;
	s = n / 10 % 10;
	b = n / 100 % 10;
	if (n == g * g * g + s * s * s + b * b * b)
		printf("%d是水仙花数\n", n);

}
return 0;
}