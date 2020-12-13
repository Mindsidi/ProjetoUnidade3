#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include <string>
#include "figurageometrica.h"
using namespace std;// não sei se deveria estar aqui, na internet diz que sim e que não
/**
 * @brief A classe Interpretador constroi o desenho
 */
class Interpretador{
    int dimx, dimy, dimz;
    float r, g, b, alpha;
public:

    Interpretador();

    std::vector<FiguraGeometrica *>parse(std::string filename);
    /**
     * @brief getDimx
     * @return - Retorna o tamanho da matriz no eixo x
     */
    int getDimx();
    /**
     * @brief getDimx
     * @return - Retorna o tamanho da matriz no eixo y
     */
    int getDimy();
    /**
     * @brief getDimx
     * @return - Retorna o tamanho da matriz no eixo z
     */
    int getDimz();

};

#endif // INTERPRETADOR_H
