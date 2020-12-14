#ifndef SCULPTOR_H
#define SCULPTOR_H
/**
 * @brief The Voxel struct
 * Armazena os valores das cores e alpha
 * E se é ativo ou não
 */
struct Voxel {
  float r,g,b;
  float alpha;
  bool isOn;
};

/**
 * @brief A classe Sculptor
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
   * @brief setColor Define a cor da figura
   * @param r Recebe float que será o valor de "r"ed(Vermelho)
   * @param g Recebe float que será o valor de "g"reen(Verde)
   * @param b Recebe float que será o valor de "b"lue(Azul)
   * @param alpha Recebe float que será o valor de alpha que será o quã transparente é a peça(alpha)
   */
  void setColor(float r, float g, float b, float alpha);
  /**
   * @brief putBox Cria um quadrado dentro da matriz 3d
   * @param x0 valor inicial de x na formula
   * @param x1 valor final de x na formula
   * @param y0 valor inicial de y na formula
   * @param y1 valor final de y na formula
   * @param z0 valor inicial de z na formula
   * @param z1 valor final de z na formula
   */
  void putVoxel(int x, int y, int z);
  /**
   * @brief cutVoxel Desabilida o voxel
   * @param x Atribui o valor a coordenada x
   * @param y Atribui o valor a coordenada y
   * @param z Atribui o valor a coordenada z
   */
  void cutVoxel(int x, int y, int z);
  void limpaVoxels(void);
  /**
   * @brief writeOFF
   * @param filename Recebe o que foi indicado, abre esse arquivo e escreve dentro dele os vertices e faces
   */
  void writeOFF(char* filename);
};

#endif // SCULPTOR_H
