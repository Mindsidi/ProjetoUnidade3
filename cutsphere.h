#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief cutSphere Desabilita voxels em formato de esfera dentro da matriz 3d, a formula utilizada pode ser encontrada nesse site:
 * http://www.mat.ufpb.br/sergio/winplot/vetorial/quadricas.html#:~:text=1.2.-,Elips%C3%B3ide,os%20eixos%20maior%20e%20menor
 * @param xcenter Local em x que representa o centro da esfera
 * @param ycenter Local em y que representa o centro da esfera
 * @param zcenter Local em z que representa o centro da esfera
 * @param radius Raio da esfera
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
