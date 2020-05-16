 #include <stdio.h>
int main()
{

printf ("Nama     : Indra Andhika Benu\n");
printf ("Nim      : F1B019072\n ");
printf ("Kelompok : 14\n");

int i;
char nama[5]={'K','U','T','U'};
char nama2[6]="KUTU";
printf("Array per Karakter = ");
for(i=0;i<=4;i++)
{
printf("%c",nama[i]);
}
printf("\n"); printf("Array string =%s\n\n",nama2);
return 0;
}
