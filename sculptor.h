#ifndef SCULPTOR_H
#define SCULPTOR_H
/**
 * @brief struct Voxel: indica a estrutura voxel,
 * armazena os valores de cor (RGB) e alpha (transparência),
 * e informa se o voxel é ativo ou não
 */
struct Voxel {
  float r,g,b;
  float alpha;
  bool isOn;
};

/**
 * @brief classe Sculptor: que gera objetos 3D, construídos por voxels
 */
class Sculptor{
protected:
  Voxel ***v;
  int nx,ny,nz;
  float r,g,b,alpha;
public:

  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  /**
   * @brief setColor Define a cor da figura no sistema RGB(Red, Green, Blue)
   * @param r Recebe float que será o valor de "r"ed(Vermelho)
   * @param g Recebe float que será o valor de "g"reen(Verde)
   * @param b Recebe float que será o valor de "b"lue(Azul)
   * @param alpha Recebe float que será o valor de alpha que será o quã transparente é a peça(alpha)
   */
  void setColor(float r, float g, float b, float alpha);
  /**
   * @brief putBox insere um bloco quadrado/retangular dentro da matriz 3d
   * @param x0 e x1, valor inicial e final de x na fórmula, respectivamente
   * @param y0 e y1, valor inicial e final de y na fórmula, respectivamente
   * @param z0 e z1, valor inicial e final de z na fórmula, respectivamente
   */
  void putVoxel(int x, int y, int z);
  /**
   * @brief cutVoxel remove o voxel
   * @param x, y, z Atribui os valores às coordenadas (x, y, z)
   */
  void cutVoxel(int x, int y, int z);
  void limpaVoxels(void);
  /**
   * @brief writeOFF
   * @param cria arquivo filename, do tipo OFF, com informações do(s) objeto(s) criado(s)
   */
  void writeOFF(char* filename);
};

#endif // SCULPTOR_H
