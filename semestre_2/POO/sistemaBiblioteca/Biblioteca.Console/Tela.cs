/*

    O SetCursorPosition() é coluna, linha

*/

public class Tela
{
    // Propriedades
    private int largura, altura;
    private ConsoleColor corTexto, corFundo;


    // Métodos 

    public Tela(int lar, int alt, ConsoleColor txt, ConsoleColor fund)
    {
        this.largura = lar;
        this.altura = alt;
        this.corFundo = fund;
        this.corTexto = txt;
    }

    public void prepararTela()
    {
        Console.BackgroundColor = this.corFundo;
        Console.BackgroundColor = this.corTexto;
        Console.Clear();

        this.MontarMoldura(0, 0, this.largura, this.altura);
    }

    public void MontarMoldura(int colIni, int linIni, int colFin, int linFin)
    {
        for (int coluna = colIni; coluna <= colFin; coluna++)
        {
            // Desenha a linha horizontal superior
            Console.SetCursorPosition(coluna, linIni);
            Console.Write("═");

            // Desenha a linha horizontal inferior
            Console.SetCursorPosition(coluna, linFin);
            Console.Write("═");
        }

        for (int linha = linIni; linha <= linFin; linha++)
        {
            // Desenha a linha vertical superior
            Console.SetCursorPosition(colIni, linha);
            Console.Write("║");

            // Desenha a linha vertical inferior
            Console.SetCursorPosition(colFin, linha);
            Console.Write("║");
        }
    }
}