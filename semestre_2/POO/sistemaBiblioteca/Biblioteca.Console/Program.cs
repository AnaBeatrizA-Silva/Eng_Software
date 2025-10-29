Tela tela = new Tela(
    80,
    25,
    ConsoleColor.Black,
    ConsoleColor.Yellow
);

LivroCRUD livroCRUD = new LivroCRUD();

string opcao = "";

List<string> menu = new List<string>();

menu.Add("1 - Empréstimos");
menu.Add("2 - Livros");
menu.Add("3 - Alunos");
menu.Add("4 - Relatórios");

while (true)
{
    tela.prepararTela();

    opcao = tela.MostrarMenu(menu, 2, 1);

    if (opcao == "0") break;
    if (opcao == "2") livroCRUD.ExecutarCRUD();


}