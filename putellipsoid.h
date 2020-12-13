#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief putEllipsoid Cria uma elipse dentro da matriz 3d, a formula utilizada pode ser encontrada nesse site:
 * http://www.mat.ufpb.br/sergio/winplot/vetorial/quadricas.html#:~:text=1.2.-,Elips%C3%B3ide,os%20eixos%20maior%20e%20menor
 * @param xcenter Local em x que representa o centro da elipse
 * @param ycenter Local em y que representa o centro da elipse
 * @param zcenter Local em z que representa o centro da elipse
 * @param rx Raio de x
 * @param ry Raio de y
 * @param rz Raio de z
 * @param atribui os valores das cores
 */
class PutEllipsoid : public FiguraGeometrica{
    int xcenter, ycenter, zcenter, rx, ry, rz;
public:

    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float alpha);

    ~PutEllipsoid();
    /**
      @brief draw - Função que desenha os voxels
      @param s - Escultor que armazena os voxels
      */
    void draw(Sculptor &s);
};

#endif // PUTELLIPSOID_H
