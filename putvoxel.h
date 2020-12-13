#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief putVoxel Inicializa o voxel
 * @param x Atribui o valor a coordenada x
 * @param y Atribui o valor a coordenada y
 * @param z Atribui o valor a coordenada z
 * @param atribui os valores das cores e transparencia
 */
class PutVoxel : public FiguraGeometrica{

    int x, y, z;

public:    

    PutVoxel(int x, int y, int z, float r, float g, float b, float alpha);

    ~PutVoxel();
    /**
      @brief draw - Função que desenha os voxels
      @param s - Escultor que armazena os voxels
      */
    void draw(Sculptor &s);
};

#endif // PUTVOXEL_H
