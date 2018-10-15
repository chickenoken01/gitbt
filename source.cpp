int USCLN(int a, int b)
{
<<<<<<< HEAD
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
=======
while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a; 
>>>>>>> 706daebb8cb9d2afd4007d9fede5fc6def867cfa
}