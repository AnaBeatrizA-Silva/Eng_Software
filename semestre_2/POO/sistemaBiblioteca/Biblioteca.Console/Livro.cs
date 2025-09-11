using System.Diagnostics.Contracts;


public class Livro
{
    // Propriedades
    public int codigo;
    public string titulo;
    public string autor;
    public int paginas;
    public double preco;


    // Métodos

    public Livro(int cod, string tit, string alt, int pag, double prc)
    {
        this.codigo = cod;
        this.titulo = tit;
        this.autor = alt;
        this.paginas = pag;
        this.preco = prc;
    }

    public void ImprimirLivro()
    {
        Console.WriteLine($"--- Dados do Livro {this.codigo} ---");
        Console.WriteLine($"Codigo: {this.codigo}"); // no c# não é obrigatório usar
        Console.WriteLine($"Título: {this.titulo}");
        Console.WriteLine($"Autor: {this.autor}");
        Console.WriteLine($"Números de Páginas: {this.paginas}");
        Console.WriteLine($"Preço: {this.preco}");
        Console.WriteLine("");
    }
}