#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief cutVoxel Desabilida o voxel
 * @param x Atribui o valor a coordenada x
 * @param y Atribui o valor a coordenada y
 * @param z Atribui o valor a coordenada z
 */
class CutVoxel : public FiguraGeometrica{
    int x, y, z;
public:

    CutVoxel(int x, int y, int z);

    ~CutVoxel();
    /**
      @brief draw - Função que desenha os voxels
      @param s - Escultor que armazena os voxels
      */
    void draw(Sculptor &s);
};

#endif // CUTVOXEL_H
