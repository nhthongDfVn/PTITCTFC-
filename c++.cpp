#include <bits/stdc++.h>
using namespace std;
vector <int> flag;
void nhapfile()
{
	fstream filein("enc.txt");
	while (filein)
	{
		int k;
		filein>>k;
		flag.push_back(k);
	}
}
int Ek(int n,int k)
{
	return n * k;
}
decrypt()
{
	int kt;
	int C_block=95;
	for (int i=0;i<flag.size();i++)
	{
		for (int j=0;j<=256;j++)
		{
		   kt=(Ek(j,95)^C_block)%256;
		   if (kt==flag[i])
		   {
		      cout<<char(j);
			  C_block=flag[i];
			  break;	
		   }	
		}
	}
}
int main()
{
	nhapfile();
	decrypt();
	return 0;
}
