// Seção do programa principal]

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

	if (op == 1) cadastrarLivro();
}


// Seção das funções