public class LivroCRUD
{
    // Propriedades

    private List<Livro> livros;
    private Livro livro;
    private int indice, coluna, linha, largura, altura;
    private List<string> dados;


    // Métodos

    // Construtor
    public LivroCRUD()
    {
        this.livros = new List<Livro>();
        this.livro = new Livro(0, "", "", 0, 0);
        this.indice = -1;

        this.dados = new List<string>();
        dados.Add("Codigo: "); // 1
        dados.Add("Título: "); // 2
        dados.Add("Autor: "); // 2
        dados.Add("Páginas: "); // 2
        dados.Add("Preço: "); // 2

        this.coluna = 20;
        this.linha = 5;
        this.largura = 30;
        this.altura = 7;
    }

    public void ExecutarCRUD()
    {
        Tela tela = new Tela(this.largura, this.altura);
        tela.MontarTela(this.coluna, this.linha, this.dados);

        this.EntrarDados(1);
    }

    public void EntrarDados(int qual)
    {
        int coluna = this.coluna + this.dados[0].Length + 1;
        int linha = this.linha + 2;
        if (qual == 1)
        {
            Console.SetCursorPosition(coluna, linha);
            this.livro.codigo = int.Parse(Console.ReadLine());
        }
        else
        {

        }
        
    }
}