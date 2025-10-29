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
        dados.Add("Codigo  : "); // 1
        dados.Add("Título  : "); // 2
        dados.Add("Autor   : "); // 2
        dados.Add("Páginas : "); // 2
        dados.Add("Preço   : "); // 2

        this.coluna = 20;
        this.linha = 5;
        this.largura = 30;
        this.altura = 7;
    }

    public void ExecutarCRUD()
    {
        string resp;

        Tela tela = new Tela(this.largura, this.altura);
        tela.MontarTela(this.coluna, this.linha, this.dados, "Cadastro de Livros");

        this.EntrarDados(1);
        bool achou = this.ProcurarCodigo();
        if (!achou)
        {
            tela.MostrarMensagem(1, 23, "Codigo não encontrado.");
            resp = tela.Perguntar(1, 24, "Deseja cadastrar (S/N): ");
            if (resp.ToLower() == "s")
            {
                this.EntrarDados(2);
                resp = tela.Perguntar(1, 24, "Confirma o cadastro (S/N): ");

                if (resp.ToLower() == "s")
                {
                    this.livros.Add(
                        new Livro(
                            this.livro.codigo,
                            this.livro.titulo,
                            this.livro.autor,
                            this.livro.paginas,
                            this.livro.preco
                        )
                    );
                }
            }
        }

        if (achou)
        {
            this.MostrarDados();
            resp = tela.Perguntar(1, 23, "Deseja Alterar, Excluir ou Voltar (A/E/V): ");

            if(resp.ToLower() == "a")
            {
                tela.LimparArea(coluna + 10, linha + 3, coluna + largura - 1, linha + 6);
                this.EntrarDados(2);

                resp = tela.Perguntar(1, 24, "Confirma alteração (S/N): ");
                if(resp.ToLower() == "s")
                {
                    this.livros[this.indice].titulo = this.livro.titulo;
                    this.livros[this.indice].autor = this.livro.autor;
                    this.livros[this.indice].paginas = this.livro.paginas;
                    this.livros[this.indice].preco = this.livro.preco;
                }
            }
            if(resp.ToLower() == "e")
            {
                resp = tela.Perguntar(1, 24, "Confirma exclusão (S/N): ");
                if(resp.ToLower() == "s")
                {
                    this.livros.RemoveAt(this.indice);
                }
            }
        }
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
            Console.SetCursorPosition(coluna, linha + 1);
            this.livro.titulo = Console.ReadLine();

            Console.SetCursorPosition(coluna, linha + 2);
            this.livro.autor = Console.ReadLine();

            Console.SetCursorPosition(coluna, linha + 3);
            this.livro.paginas = int.Parse(Console.ReadLine());

            Console.SetCursorPosition(coluna, linha + 4);
            this.livro.preco = double.Parse(Console.ReadLine());
        }

    }

    public bool ProcurarCodigo()
    {
        bool encontrei = false;

        for (int i = 0; i < this.livros.Count; i++)
        {
            if (this.livro.codigo == this.livros[i].codigo)
            {
                encontrei = true;
                this.indice = i;
                break;
            }
        }

        return encontrei;
    }

    public void MostrarDados()
    {
        int coluna = this.coluna + this.dados[0].Length + 1;
        int linha = this.linha + 3;

        Console.SetCursorPosition(coluna, linha);
        Console.Write(this.livros[this.indice].titulo);

        Console.SetCursorPosition(coluna, linha + 1);
        Console.Write(this.livros[this.indice].autor);

        Console.SetCursorPosition(coluna, linha + 2);
        Console.Write(this.livros[this.indice].paginas);

        Console.SetCursorPosition(coluna, linha + 3);
        Console.Write(this.livros[this.indice].preco);
    }
}