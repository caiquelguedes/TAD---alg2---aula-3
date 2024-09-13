#include "Data.h"

void Data::setDia(int d)
{
    if(d >= 1 && d <= 31)
        dia = d;
    else
        dia = 1;
}

void Data::setMes(int m)
{
    if(m >= 1 &&  m <=12)
        mes = m;
    else
        mes = 1;
}

void Data::setAno(int a)
{
    if(a < 0)
        a = 1900;
        else
            ano = a;
}

Data::Data(int d, int m, int a)
{
    setDia(d);
    setMes(m);
    setAno(a);
}
int Data::dataToInt(){

    return numDiasMes[mes]+dia+(ano-1)*365;

}
Data Data::intToData(int num){
    int aux = 0;

    a = num/365;
    aux = num%365;
    for(int i > 0; i < 12;i++){
            if(aux > numDiasMes[i])
                m = i;
    }
   

    Data auxData(d,m,a);

    return auxData;

}

Data::~Data() {}
