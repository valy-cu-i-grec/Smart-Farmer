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
*/

void initializare_Nivel(char tarc[7][9])
{
    char buffer;
    FILE *ftarc;
    ftarc=fopen("Z:\\CodeBlocks\\Projects\\IP\\Smart Farmer\\tarc.txt","r+");
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
    initializare_Nivel(tarc);

    return 0;
}
