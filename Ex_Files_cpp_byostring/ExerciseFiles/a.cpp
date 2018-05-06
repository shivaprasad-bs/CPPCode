#include<iostream>
#include<cstdio>

struct ch {
	char a;
	char  b;
	int aa;
	char  ab;
	char  cb;
	char  db;
};

struct ch ab;

using namespace std;

void argument_alignment_check( char c1, char c2 )
{
   // Considering downward stack
  // (on upward stack the output will be negative)
	     printf("Displacement %d\n", (int)&c2 - (int)&c1);
 }
main() {
	cout<<"sizeof short: "<<sizeof(short)<<endl;
	cout<<"sizeof struct ch: "<<sizeof(ab)<<endl;
	cout<<"sizeof signed: "<<sizeof(signed)<<endl;
	cout<<"sizeof unsigned: "<<sizeof(unsigned)<<endl;
	cout<<"sizeof wchar_t: "<<sizeof(wchar_t)<<endl;
//	cout<<"sizeof char16_t: "<<sizeof(char16_t)<<endl;
//	cout<<"sizeof char32_t: "<<sizeof(char32_t)<<endl;
	cout<<"sizeof unsigned short: "<<sizeof(unsigned short)<<endl;
	cout<<"sizeof Int: "<<sizeof(int)<<endl;
	cout<<"sizeof long Int: "<<sizeof(long int)<<endl;
	cout<<"sizeof long long Int: "<<sizeof(long long int)<<endl;
	cout<<"sizeof double: "<<sizeof(double)<<endl;
	cout<<"sizeof long double: "<<sizeof(long double)<<endl<<endl;

char a, b;

a = 'c';
b ='a';
 argument_alignment_check( a,b );
}
