#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief putBox Cria um quadrado dentro da matriz 3d
 * @param x0 valor inicial de x na formula
 * @param x1 valor final de x na formula
 * @param y0 valor inicial de y na formula
 * @param y1 valor final de y na formula
 * @param z0 valor inicial de z na formula
 * @param z1 valor final de z na formula
 * @param recebe os valores da cores e transparencia
 */
class PutBox : public FiguraGeometrica{

    int x0, x1, y0, y1, z0, z1;

public:

    PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float alpha);

    ~PutBox();
    /**
      @brief draw - Função que desenha os voxels
      @param s - Escultor que armazena os voxels
      */
    void draw(Sculptor &s);
};

#endif // PUTBOX_H
