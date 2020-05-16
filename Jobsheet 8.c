 #include <stdio.h>
int main ()
{
printf ("Nama     : Indra Andhika Benu\n");
printf ("Nim      : F1B019072\n ");
printf ("Kelompok : 14\n");

int x[3],i;
printf("masukan 2 angka nim terakhir anda\n\n");
for(i=0;i<=4;i++)
{
printf("Masukkan nilai %i : ",i+1);
scanf("%i",&x[i]);
}
printf("\n");
for(i=0;i<=4;i++)
{
printf("nimke-%i= %i\n",i+1,x[i]);
}
printf("\n");
return 0;
}

