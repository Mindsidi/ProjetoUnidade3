#include <iostream>
#include <vector>
#include "sculptor.h"
#include "figurageometrica.h"
#include "putbox.h"
#include "putellipsoid.h"
#include "putsphere.h"
#include "putvoxel.h"
#include "cutbox.h"
#include "cutellipsoid.h"
#include "cutsphere.h"
#include "cutvoxel.h"
#include "interpretador.h"

using namespace std;

int main(){

    Sculptor *s1;

    Interpretador parser;
    vector<FiguraGeometrica*> figs;

    figs = parser.parse((char*)"C:/Users/G/Desktop/entrada.txt");

    s1 = new Sculptor(parser.getDimx(), parser.getDimy(), parser.getDimz());

    for(size_t i=0; i<figs.size(); i++){
        figs[i]->draw(*s1);
    }

    s1->writeOFF((char*)"C:/Users/G/Desktop/saida.off");

    for(size_t i=0; i<figs.size(); i++){
        delete figs[i];
    }
    delete s1;
    return 0;
}
