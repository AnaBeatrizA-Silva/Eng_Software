/*

Cada classe em um arquivo, cada arquivo com apenas uma classe

Arquivo e classe com o mesmo nome.

*/

List<Livro> livros = new List<Livro>();

Console.Clear();

Console.WriteLine("---=== Sistema de Biblioteca ---===");

// Cria o objeto 'livro1'
Livro livro1 = new Livro(67, "Senhor do Anéis","JRR Tolkien", 1270, 120.80);

// Cria o objeto 'livro2'
Livro livro2 = new Livro(11, "Harry Potter", "JK Rowling", 350, 70.65);

// Imprime os livros
livro1.ImprimirLivro();
livro2.ImprimirLivro();

Console.ReadKey();  