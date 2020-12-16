#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief cutSphere remove esfera dentro da matriz 3d, cuja fórmula utilizada pode ser encontrada nesse site:
 * http://www.mat.ufpb.br/sergio/winplot/vetorial/quadricas.html#:~:text=1.2.-,Elips%C3%B3ide,os%20eixos%20maior%20e%20menor
 * @param com centro da esfera nas coordenadas (xcenter, ycenter, zcenter) e raio r
 */
class CutSphere : public FiguraGeometrica{

    int xcenter, ycenter, zcenter, radius;

public:

    CutSphere(int xcenter, int ycenter, int zcenter, int radius);

    ~CutSphere();
    /**
      @brief draw - Função que desenha os voxels
      @param s - Escultor que armazena os voxels
      */
    void draw(Sculptor &s);
};

#endif // CUTSPHERE_H
