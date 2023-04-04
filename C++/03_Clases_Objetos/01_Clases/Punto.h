// Declaracion de clases

class Punto{
    // Atributos
    private:
        int x, y;

    // Metodos
    public:
        // Metodo constructor
        Punto(int _x, int _y){
            x = _x;
            y = _y;
        }
        // Segundo metodo constructor
        Punto(){
            x = y = 0; 
        }

        void setX(int valorX); // Setter
        int getX(); // Getter
        void setY(int valorX); // Setter
        int getY(); // Getter
};