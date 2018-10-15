int USCLN(int a, int b)
{
	int a,b;
 cout<<"Nhap so a= ";
 cin>>a;
 cout<<"Nhap so b= ";
 cin>>b;
 while(a!=b)
 {
  if(a>b)
  {
   a=a-b;
  }
  else b=b-a;
 }
 cout<<"UCLN="<<a<<"\n";
}