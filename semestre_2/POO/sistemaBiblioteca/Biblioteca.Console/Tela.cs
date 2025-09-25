/*

    O SetCursorPosition() é coluna, linha

*/

using System.Reflection.Emit;
using System.Runtime.CompilerServices;

public class Tela
{
    // Propriedades
    private int largura, altura;
    private ConsoleColor corTexto, corFundo;


    // Métodos 

    // Construtor sobrecarregado
    public Tela(int lar, int alt)
    {
        this.largura = lar;
        this.altura = alt;
    }

    //Construtor sobrecarregado
    public Tela(int lar, int alt, ConsoleColor txt, ConsoleColor fund)
    {
        this.largura = lar;
        this.altura = alt;
        this.corTexto = txt;
        this.corFundo = fund;
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

        Console.SetCursorPosition(colIni, linIni);
        Console.Write("╔");
        Console.SetCursorPosition(colIni, linFin);
        Console.Write("╚");
        Console.SetCursorPosition(colFin, linIni);
        Console.Write("╗");
        Console.SetCursorPosition(colFin, linFin);
        Console.Write("╝");
    }

    public void MontarTela(int col, int lin, List<string> dados, string titulo)
    {
        this.MontarMoldura(col, lin, col + this.largura, lin + this.altura);

        col++;
        lin++;
        Console.SetCursorPosition(col, lin);
        Console.Write(titulo);
        lin++;
        foreach (string pergunta in dados)
        {
            Console.SetCursorPosition(col, lin);
            Console.Write(pergunta);
            lin++;
        }
    }

    public string MostrarMenu(List<string> opcoes, int col, int lin)
    {
        string opcaoEscolhida = "";
        int colFin = col + opcoes[0].Length + 1;
        int linFin = lin + opcoes.Count + 2;
        this.MontarMoldura(col, lin, colFin, linFin);

        col++;
        lin++;
        for (int i = 0; i < opcoes.Count; i++)
        {
            Console.SetCursorPosition(col, lin);
            Console.Write(opcoes[i]);
            lin++;
        }

        Console.SetCursorPosition(col, lin);
        Console.Write("Opção: ");
        opcaoEscolhida = Console.ReadLine();

        return opcaoEscolhida;
    }

    public void MostrarMensagem(int col, int lin, string msg)
    {
        Console.SetCursorPosition(col, lin);
        Console.Write(msg);
    }

    public string Perguntar(int col, int lin, string perg)
    {
        this.MostrarMensagem(col, lin, perg);
        string resp = Console.ReadLine();
        return resp;
    }
}