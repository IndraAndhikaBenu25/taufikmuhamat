 #include <iostream>
using namespace std;
int main ()
{
	cout<<"Nama     :Indra Andhika Benu"<<endl;
	cout<<"Nim      :F1B019072"<<endl;
	cout<<"Kelompok :14"<<endl;

int x[3],i;
cout<<"masukkan NIM terakhir Anda"<<endl;
for(i=0;i<=4;i++)
{
cout<<"Masukkan nim "<<i+1<<" : ";
cin>>x[i];
}
cout<<endl;
for(i=0;i<=4;i++)
{
cout<<"nim ke- "<<i+1<<" = "<<x[i]<<endl;
} cout<<endl;

 return 0;
}
