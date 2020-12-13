#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"
/**
 * @brief Classe abstrata
 */
class FiguraGeometrica{
protected:
    float r, g, b, alpha;

public:

    virtual ~FiguraGeometrica(){};
    /**
      @brief draw - Função que desenha os voxels
      @param s - Escultor que armazena os voxels
      */
    virtual void draw(Sculptor &s)=0;
};

#endif // FIGURAGEOMETRICA_H
