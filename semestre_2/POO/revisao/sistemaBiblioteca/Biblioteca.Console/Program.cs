// Seção do programa principal]

using System;

List<int> codigos = new List<int>();
List<string> titulos = new List<string>();
List<string> autores = new List<string>();
List<int> paginas = new List<int>();
List<double> precos = new List<double>();

int op;

while (true)
{
	Console.Clear();
	Console.WriteLine("---=== Menu ===---");
	Console.WriteLine("1 - Cadastrar Livro");
	Console.WriteLine("2 - Consultar Livro");
	Console.WriteLine("3 - Excluir Livro");
	Console.WriteLine("4 - Relatório de Livros");
	Console.WriteLine("0 - Sair");
	Console.WriteLine("Opção desajada: ");
	op = int.Parse(Console.ReadLine());

	if (op == 0) break;
	if (op == 1) CadastrarLivro();
	if (op == 2) ConsultarLivro();
	if (op == 3) ExcluirLivro();
	if (op == 4) EmitirRelatorio();
}

// Seção das funções

void CadastrarLivro()
{
	string titulo, autor, resp;
	int numPag, codigo;
	double preco;

	Console.Clear();
	Console.WriteLine("---=== Cadastro de Livro ===---");
	Console.Write("Código do Livro: ");
	codigo = int.Parse(Console.ReadLine());

	Console.Write("Título do livro: ");
	titulo = Console.ReadLine();

	Console.Write("Nome do autor: ");
	autor = Console.ReadLine();

	Console.Write("Número de Páginas: ");
	numPag = int.Parse(Console.ReadLine());

	Console.Write("Preço: ");
	preco = double.Parse(Console.ReadLine());

	Console.Write("Confirmar o cadastro (S/N): ");
	resp = Console.ReadLine();
	if (resp == "s" || resp == "S")
	{
		codigos.Add(codigo);
		titulos.Add(titulo);
		autores.Add(autor);
		paginas.Add(numPag);
		precos.Add(preco);
	}
}


void ConsultarLivro()
{

}


void ExcluirLivro()
{
	
}


void EmitirRelatorio()
{
	int linha;

	Console.Clear();
	Console.WriteLine("---=== Relatório de Livros ===---");

	Console.SetCursorPosition(0, 2);
	Console.Write("Código");
	Console.SetCursorPosition(8, 2);
	Console.Write("Título");
	Console.SetCursorPosition(40, 2);
	Console.Write("Autor");
	Console.SetCursorPosition(60, 2);
	Console.Write("Num Pags");
	Console.SetCursorPosition(69, 2);
	Console.Write("Preço");

	linha = 4;
	for (int i = 0; i < codigos.Count; i++)
	{
		Console.SetCursorPosition(0, linha);
		Console.Write(codigos[i]);
		Console.SetCursorPosition(8, linha);
		Console.Write(titulos[i]);
		Console.SetCursorPosition(40, linha);
		Console.Write(autores[i]);
		Console.SetCursorPosition(60, linha);
		Console.Write(paginas[i]);
		Console.SetCursorPosition(69, linha);
		Console.Write(precos[i]);
		linha++;
	}

	Console.WriteLine("\n --- Pressione uma tecla para continuar ---");
	Console.ReadKey();
}
