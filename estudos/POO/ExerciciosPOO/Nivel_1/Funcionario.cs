public class Funcionario
{
    public string nome;
    public int idade;
    public double salario;

    public Funcionario()
    {
        this.nome = "Desconhecido";
        this.idade = 0;
        this.salario = 0.0;
    }

    public Funcionario(string nome, int idade)
    {
        this.nome = nome;
        this.idade = idade;
        salario = 1500;
    }

    public Funcionario(string nome, int idade, double salario)
    {
        this.nome = nome;
        this.idade = idade;
        this.salario = salario;
    }
}