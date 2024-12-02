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
#-spatiu gol
a-troaca
nivel1+nivel2:dificultate start
nivel3+nivel4:dificultate junior
nivel5:dificultate master
*/

void initializare_Nivel(char tarc[7][9],int nivel)
{
    char buffer;
    FILE *ftarc;
    switch(nivel)
    {
    case 1:
        ftarc=fopen("Z:\\CodeBlocks\\Projects\\IP\\Smart Farmer\\Nivele\\nivel1.txt","r+");
        break;
    case 2:
        ftarc=fopen("Z:\\CodeBlocks\\Projects\\IP\\Smart Farmer\\Nivele\\nivel2.txt","r+");
        break;
    case 3:
        ftarc=fopen("Z:\\CodeBlocks\\Projects\\IP\\Smart Farmer\\Nivele\\nivel3.txt","r+");
        break;
    case 4:
        ftarc=fopen("Z:\\CodeBlocks\\Projects\\IP\\Smart Farmer\\Nivele\\nivel4.txt","r+");
        break;
    case 5:
        ftarc=fopen("Z:\\CodeBlocks\\Projects\\IP\\Smart Farmer\\Nivele\\nivel5.txt","r+");
        break;
    }

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
    int nivel;
    cin>>nivel;
    initializare_Nivel(tarc,nivel);
    while(playing)
    {

    }

    return 0;
}
