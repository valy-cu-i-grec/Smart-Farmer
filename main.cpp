#include <bits/stdc++.h>

using namespace std;

ifstream fin("tarc.txt");

/*
LEGENDA
c-cai
o-oi
p-porci
v-vaci
g-gard
q-colt/capat gard
#-spatiu gol
a-troaca

nivel1+nivel2:dificultate start
nivel3+nivel4:dificultate junior
nivel5:dificultate master

======
CONDITII GARD
g intalneste g = not ok
orice alta combinatie = ok
======
*/
char matL[7][7]= {{'v','#','#','#','#','#','o'},{'#','q','g','q','#','#','#'},{'#','g','#','#','#','#','#'},{'#','g','#','#','#','#','#'},
{'#','g','#','#','#','#','#'},{'#','q','#','#','#','#','#'},{'o','#','#','#','#','#','v'}};
char matGL[7][7]= {{'v','#','#','#','#','#','o'},{'#','q','#','#','#','#','#'},{'#','g','#','#','#','#','#'},{'#','g','#','#','#','#','#'},
{'#','g','#','#','#','#','#'},{'#','q','#','#','#','#','#'},{'o','#','#','#','#','#','v'}};
char matGS[7][7]= {{'v','#','#','#','#','#','o'},{'#','q','#','#','#','#','#'},{'#','g','#','#','#','#','#'},{'#','q','#','#','#','#','#'},
{'#','#','#','#','#','#','#'},{'#','#','#','#','#','#','#'},{'o','#','#','#','#','#','v'}};
void roteste(char m[7][7])
{
    for(int i=0; i<7; i++)
    {
        for(int j=i+1; j<7; j++)
            swap(m[i][j], m[j][i]);
    }

    for(int i=0; i<7; i++)
    {
        for(int j=0; j<3; j++)
        {
            swap(m[i][j], m[i][7-j-1]);
        }
    }
}
void initializare_Nivel(char tarc[7][9])
{
    char buffer;
    FILE *ftarc;
    int nivel;

select_nivel:
    cout<<"selectaza nivelul: ";
    cin>>nivel;
    switch(nivel)
    {
    case 1:
        ftarc=fopen("Nivele\\nivel1.txt","r+");
        break;
    case 2:
        ftarc=fopen("Nivele\\nivel2.txt","r+");
        break;
    case 3:
        ftarc=fopen("Nivele\\nivel3.txt","r+");
        break;
    case 4:
        ftarc=fopen("Nivele\\nivel4.txt","r+");
        break;
    case 5:
        ftarc=fopen("Nivele\\nivel5.txt","r+");
        break;
    default:
        cout<<"nivel invalid\n";
        goto select_nivel;
        break;
    }
    system("CLS");

    for (int i=0; i<7; i++)
    {
        for (int j=0; j<9; j++)
        {
            fread (&tarc[i][j],sizeof(char),1,ftarc);
            fread (&buffer,sizeof(char),1,ftarc);
            cout<<tarc[i][j]<<" ";
        }
        fread(&buffer,sizeof(char),1,ftarc);
        cout<<endl;
    }
    fclose(ftarc);
}

int main()
{
    char tarc[7][9];
    bool playing;
    initializare_Nivel(tarc);
    return 0;
}
