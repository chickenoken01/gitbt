int bcnn(int a,int b){
    if(a<=1)return b;
    if(b<=1)return a;
    int _a=a,_b=b;
    while(_a!=_b){
        if(_a>_b)_a-=_b;
        else _b-=_a;
    }
    return a*b/_a;
}