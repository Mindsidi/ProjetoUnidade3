#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief putBox insere bloco quadrado/retangular dentro da matriz 3d
 * @param x0 e x1, valor inicial e final de x na fórmula, respectivamente
 * @param y0 e y1, valor inicial e final de y na fórmula, respectivamente
 * @param z0 e z1, valor inicial e final de z na fórmula, respectivamente
 * @param recebe os valores de cores e transparência
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
