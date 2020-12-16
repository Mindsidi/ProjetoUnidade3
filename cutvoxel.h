#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief cutVoxel remove o voxel
 * @param x, y, z atribui valor às coordenadas (x, y ,z)
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
