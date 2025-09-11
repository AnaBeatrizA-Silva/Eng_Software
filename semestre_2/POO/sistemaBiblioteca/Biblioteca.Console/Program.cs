Tela tela = new Tela(
    80,
    25,
    ConsoleColor.Black,
    ConsoleColor.Yellow
);

string opcao = "";

List<string> menu = new List<string>();

menu.Add("1 - Empréstimos");
menu.Add("2 - Livros");
menu.Add("3 - Alunos");
menu.Add("4 - Relatórios");

while (true)
{
    tela.prepararTela();

    if (opcao == "0") break;
    Console.ReadKey();
}