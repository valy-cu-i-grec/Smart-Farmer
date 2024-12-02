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
char matL[5][5]= {{'q','g','q',0,0},{'g',0,0,0,0},{'g',0,0,0,0},{'g',0,0,0,0},{'q',0,0,0,'v'}};
char matGS[5][5]= {{'q',0,0,0,0},{'g',0,0,0,0},{'q',0,0,0,0},{0,0,0,0,0},{0,0,0,0,'v'}};
char matGL[5][5]= {{'q',0,0,0,0},{'g',0,0,0,0},{'g',0,0,0,0},{'g',0,0,0,0},{'q',0,0,0,'v'}};

void roteste(char m[5][5])
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
            swap(mat[i][j], mat[j][i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n/2; j++)
        {
            swap(mat[i][j], mat[i][n-j-1]);
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
        ftarc=fopen("C:\\Users\\Valy\\OneDrive\\Desktop\\IP\\SmartFarmer\\Smart-Farmer\\Smart-Farmer\\Nivele\\nivel1.txt","r+");
        break;
    case 2:
        ftarc=fopen("C:\\Users\\Valy\\OneDrive\\Desktop\\IP\\SmartFarmer\\Smart-Farmer\\Smart-Farmer\\Nivele\\nivel2.txt","r+");
        break;
    case 3:
        ftarc=fopen("C:\\Users\\Valy\\OneDrive\\Desktop\\IP\\SmartFarmer\\Smart-Farmer\\Smart-Farmer\\Nivele\\nivel3.txt","r+");
        break;
    case 4:
        ftarc=fopen("C:\\Users\\Valy\\OneDrive\\Desktop\\IP\\SmartFarmer\\Smart-Farmer\\Smart-Farmer\\Nivele\\nivel4.txt","r+");
        break;
    case 5:
        ftarc=fopen("C:\\Users\\Valy\\OneDrive\\Desktop\\IP\\SmartFarmer\\Smart-Farmer\\Smart-Farmer\\Nivele\\nivel5.txt","r+");
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
