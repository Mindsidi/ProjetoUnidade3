#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief putSphere insere esfera dentro da matriz 3d, cuja fórmula utilizada pode ser encontrada nesse site:
 * http://www.mat.ufpb.br/sergio/winplot/vetorial/quadricas.html#:~:text=1.2.-,Elips%C3%B3ide,os%20eixos%20maior%20e%20menor
 * @param com centro da esfera na coordenadas (xcenter, ycenter, zcenter) e raio r
 * @param atribui os as cores e transparencia
 */

class PutSphere : public FiguraGeometrica{
    int xcenter, ycenter, zcenter, radius;
public:

    PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float alpha);

    ~PutSphere();
    /**
      @brief draw - Função que desenha os voxels
      @param s - Escultor que armazena os voxels
      */
    void draw(Sculptor &s);
};

#endif // PUTSPHERE_H
